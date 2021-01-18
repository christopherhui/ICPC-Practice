#include <bits/stdc++.h>
using namespace std;

//int sum = 0;
//
//void helper(vector<vector<int>>& mat, vector<vector<bool>>& visited, int a, int b, int currSum) {
//    if (a == mat.size() - 1 && b == mat[0].size() - 1) {
//        sum += currSum;
//    }
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            int new_a = a + paths[i];
//            int new_b = b + paths[j];
//            if (new_a < 0 || new_b < 0 || new_a >= mat.size() || new_b >= mat.size()) {
//                continue;
//            }
//            visited[new_a][new_b] = true;
//            helper(mat, visited, new_a, new_b, currSum + mat[new_a][new_b]);
//            visited[new_a][new_b] = false;
//        }
//    }
//}

int sumPaths(vector<vector<int>>& mat) {
//    vector<vector<bool>> visited(mat.size(), vector<bool>(mat[0].size()));
//    helper(mat, visited, 0, 0, mat[0][0]);

    vector<vector<int>> dp(mat.size() + 1, vector<int>(mat[0].size() + 1, 0));
    vector<vector<int>> paths(mat.size(), vector<int>(mat[0].size(), 1));
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[0].size(); j++) {
            if (i == 0 || j == 0) {
                dp[i + 1][j + 1] = dp[i][j + 1] + dp[i + 1][j] + mat[i][j];
            }
            else {
                paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
                dp[i + 1][j + 1] = dp[i][j + 1] + dp[i + 1][j] + mat[i][j] * paths[i][j];
            }
        }
    }
    return dp[mat.size()][mat[0].size()];
}

int main() {
    int a, b; cin >> a >> b;
    vector<vector<int>> mat(a, vector<int>(b));
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> mat[i][j];
        }
    }
    cout << sumPaths(mat);
}