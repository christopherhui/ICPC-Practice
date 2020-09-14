#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> A(n);
        auto cmp = [](pair<int, int>& f, pair<int, int> s) -> bool {
            int a = f.first, b = f.second;
            int c = s.first, d = s.second;
            if (b-a == d-c) {
                return a > c;
            }
            else {
                return b-a < d-c;
            }
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> Q(cmp);
        int num = 1;
        Q.push({0, n});

        while (!Q.empty()) {
            pair<int, int> curr = Q.top(); Q.pop();
            int l = curr.first, r = curr.second;
            if (l < r) {
                if ((r - l + 1) % 2 == 0) {
                    int a = (l+r)/2, b = (l+r)/2+1;
                    A[a] = num++;
                    Q.push({l, a});
                    Q.push({b, r});
                }
                else {
                    int a = (l+r-1)/2, b = (l+r-1)/2+1;
                    A[(l+r-1)/2] = num++;
                    Q.push({b, r});
                    Q.push({l, a});
                }
            }
        }
        for (int val : A) cout << val << ' ';
        cout << endl;
    }
}