#include <bits/stdc++.h>
#define EPS 1e-8;
#define nl '\n';
using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> pt;
typedef vector<pt> pol;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<ld> vd;
typedef vector<vd> vvd;
typedef pair<ll, ll> pii;
typedef vector<pii> vpii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> arr(s.size());
        queue<int> lastZero;
        queue<int> lastOne;
        int newSet = 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                if (lastOne.empty()) {
                    arr[i] = newSet;
                    newSet++;
                }
                else {
                    int curr = lastOne.front(); lastOne.pop();
                    arr[i] = curr;
                }
                lastZero.push(arr[i]);
            }
            else {
                if (lastZero.empty()) {
                    arr[i] = newSet;
                    newSet++;
                }
                else {
                    int curr = lastZero.front(); lastZero.pop();
                    arr[i] = curr;
                }
                lastOne.push(arr[i]);
            }
        }
        cout << newSet-1 << nl;
        for (int val : arr) {
            cout << val << ' ';
        }
        cout << nl;
    }

    return 0;
}