#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
bool checkV(vector<vector<bool>> visited, pair<int,int> loc, int newPosFirst, int newPosSecond, vector<string> grid, int m, int n) {
    return newPosFirst >= 0 &&
           newPosFirst < m && 
           newPosSecond >= 0 &&
           newPosSecond < n &&
           !visited[newPosFirst][newPosSecond];
}
     
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
    int m, n; cin >> m >> n;
    bool check = false;
    vector<string> grid(m);
    for (int i = 0; i < m; i++) {
        cin >> grid[i];
    }
    vector<vector<bool>> visited(m, vector<bool>(n, 0));
    vector<pair<int, int>> locations = {make_pair(0,1), make_pair(1,0), make_pair(0,-1), make_pair(-1,0)};
    vector<int> a(3); a[0] = 0; a[1] = 0; a[2] = 0;
    queue<vector<int>> q;
    q.push(a);
    visited[0][0] = 1;
    
    while (!q.empty()) {
        vector<int> curr = q.front();
        q.pop();
        
        if (curr[0] == m-1 && curr[1] == n-1) {
            cout << curr[2] << endl;
            check = true;
            break;
        }
    
        for (pair<int,int> loc : locations) {
            int newPosFirst = curr[0] + loc.first * (grid[curr[0]][curr[1]] - '0');
            int newPosSecond = curr[1] + loc.second * (grid[curr[0]][curr[1]] - '0');
            if (checkV(visited, loc, newPosFirst, newPosSecond, grid, m, n)) {
                vector<int> newPair(3); 
                visited[newPosFirst][newPosSecond] = 1;
                newPair[0] = newPosFirst;
                newPair[1] = newPosSecond;
                newPair[2] = curr[2] + 1;
                q.push(newPair);
            } 
        }
    }
    
    if (!check) cout << "IMPOSSIBLE" << endl;
    
    return 0;
}