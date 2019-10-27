#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool comparator(pair<ll,ll> one, pair<ll,ll> two) {
    return (one.first == two.first) ? one.second > two.second: one.first < two.first;
}

bool comparator2(pair<ll,ll> one, pair<ll,ll> two) {
    return one.second > two.second;
}

int main() {

    ifstream file;
    file.open("icecream.in");

    ll n;
    file >> n;
    while (n--) {
        ll n, k;
        file >> n >> k;
        vector<ll> v1(n);
        vector<ll> v2(n);
        for (ll i = 0; i < n; i++)
            file >> v1[i];
        for (ll i = 0; i < n; i++)
            file >> v2[i];
        vector<pair<ll,ll>> v(n);
        for (ll i = 0; i < n; i++) {
            v[i] = make_pair(v1[i], v2[i]);
        }
        sort(v.begin(), v.end(), comparator);
        ll maxVal = v[0].first;
        ll count = 0;
        ll amt = 0;
        for (amt = 0; amt < k; amt++) {
            maxVal = max(maxVal, v[amt].first);
        }
        while (v[amt].first <= maxVal && amt < n) {
          amt++;
        }
        sort(v.begin(), v.begin()+amt, comparator2);
        for (ll i = 0; i < amt; i++) {
            if (i >= k) break;
            count += v[i].second;
        }
        cout << maxVal << ' ' << count << endl;
    }

    return 0;
}