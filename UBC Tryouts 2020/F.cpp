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

    int n; cin >> n;
    vector<vector<int>> grid(n + 1, vector<int>(n + 1));
    vector<vector<int>> res(n + 1, vector<int>(n + 1));
    vector<int> largest(n + 1);
    for (int i = 1; i <= n; i++) {
        cout << "? " << 1 << ' ' << i << endl;
        cin >> largest[i];
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            cout << "? " << 2 << ' ' << i << ' ' << j << endl;
            cin >> res[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            if ((largest[i] + largest[j] - res[i][j]) == 2) {
                grid[i][j] = 1;
            }
        }
    }

    cout << '!' << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}