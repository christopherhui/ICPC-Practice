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

vector<int> values = {2, 3, 7, 5};

bool primiality(int val) {
    for (int i = 2; i*i <= val; i++) {
        if (val % i == 0) {
            return false;
        }
    }
    return true;
}

void generate(vector<vector<int>>& grid, ll& res, vector<vector<int>>& primesl, vector<vector<int>>& primest, int i, int j, unordered_set<int>& s) {
    if (j >= grid[0].size()) {
        i += 1;
        j = 0;
    }
    if (i >= grid.size()) {
        res++;
    }
    else {
        if (i == 0 && j == 0) {
            for (int v : values) {
                grid[i][j] = v;
                primesl[i][j] = v;
                primest[i][j] = v;
                generate(grid, res, primesl, primest, i, j + 1, s);
                grid[i][j] = 0;
                primesl[i][j] = 0;
                primest[i][j] = 0;
            }
        }
        else if (i == 0) {
            for (int v : values) {
                grid[i][j] = v;
                primesl[i][j] = (primesl[i][j - 1] * 10) + v;
                primest[i][j] = v;
                if (primiality(primesl[i][j])) {
                    generate(grid, res, primesl, primest, i, j + 1, s);
                }
                grid[i][j] = 0;
                primesl[i][j] = 0;
                primest[i][j] = 0;
            }
        }
        else if (j == 0) {
            for (int v : values) {
                grid[i][j] = v;
                primest[i][j] = (primest[i - 1][j] * 10) + v;
                primesl[i][j] = v;
                if (primiality(primest[i][j])) {
                    generate(grid, res, primesl, primest, i, j + 1, s);
                }
                grid[i][j] = 0;
                primest[i][j] = 0;
                primesl[i][j] = 0;
            }
        }
        else {
            for (int a = 0; a < 10; a++) {
                grid[i][j] = a;
                primesl[i][j] = (primesl[i][j - 1] * 10) + a;
                primest[i][j] = (primest[i - 1][j] * 10) + a;
                if (primiality(primesl[i][j]) && primiality(primest[i][j])) {
                    generate(grid, res, primesl, primest, i, j + 1, s);
                }
                grid[i][j] = 0;
                primesl[i][j] = 0;
                primest[i][j] = 0;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    ll res = 0;
    vector<vector<int>> grid(n, vector<int>(m));
    vector<vector<int>> primesl(n, vector<int>(m));
    vector<vector<int>> primest(n, vector<int>(m));
    unordered_set<int> s;
    generate(grid, res, primesl, primest, 0, 0, s);

    cout << res << endl;

    return 0;
}