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

double dist(vector<int>& a, vector<int>& b) {
    double xA = a[1], yA = a[2];
    double xB = b[1], yB = b[2];
    return sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
}

int main() {
    int P, N; cin >> P >> N;
    vector<vector<int>> v;
    while (N--) {
        int p, x, y, t; cin >> p >> x >> y >> t;
        v.push_back({t, x, y, p});
    }
    sort(v.begin(), v.end());
    int count = 0;
    map<int, set<int>> pairings;
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < min(i + 7, (int) v.size()); j++) {
            if (v[i][3] == v[j][3]) {
                continue;
            }

            if (v[j][0] - v[i][0] > 10) {
                break;
            }
            double dis = dist(v[i], v[j]);
            if (dis < 1000 || abs(dis - 1000) < 1e-8) {
                int p1 = v[i][3];
                int p2 = v[j][3];
                if (p1 > p2) swap(p1, p2);
                if (!pairings.count(p1) || pairings[p1].find(p2) == pairings[p1].end()) {
                    pairings[p1].insert(p2);
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    for (auto it = pairings.begin(); it != pairings.end(); it++) {
        for (auto jt = it->second.begin(); jt != it->second.end(); jt++) {
            cout << it->first << ' ' << *jt << endl;
        }
    }
}