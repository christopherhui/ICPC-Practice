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
        vi arr(n);
        ll sum = 0;
        int res = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr.begin(), arr.end());
        for (ll i = 0; i <= sum; i++) {
            int left = 0, right = arr.size() - 1;
            int count = 0;
            while (left < right) {
                ll curr_sum = arr[left] + arr[right];
                if (curr_sum < i) {
                    left++;
                }
                else if (curr_sum > i) {
                    right--;
                }
                else {
                    left++;
                    right--;
                    count++;
                }
            }
            res = max(res, count);
        }
        cout << res << nl;
    }

    return 0;
}