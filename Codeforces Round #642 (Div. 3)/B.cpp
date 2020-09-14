#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int ans(vector<int>& A, vector<int>& B, int n, int k) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int i = A.size()-1, j = B.size()-1;
    int res = 0;
    for (int c = 0; c < n; c++) {
        if (A[i] > B[j] || k == 0) {
            res += A[i];
            i--;
        }
        else {
            res += B[j];
            j--;
            k--;
        }
    }
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> A(n);
        vector<int> B(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> B[i];
        }
        cout << ans(A, B, n, k) << endl;
    }
}