#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
	cin.tie(0);
  cout.tie(0);

  ll n, m, t, maxTime, maxNum;

  maxTime = 1000000001;
  maxNum = 0;

  cin >> n >> m;
  vector<ll> v1;
  vector<ll> v2;
  map<ll, ll> map;
  while (n--) {
    cin >> t;
    v1.push_back(t);
  }
  while (m--) {
    cin >> t;
    v2.push_back(t);
  }
  for (ll i = 0; i < v1.size(); i++) {
    for (ll j = 0; j < v2.size(); j++) {
      if (v2[j] >= v1[i]) {
        map[v2[j]-v1[i]] += 1;
      }
    }

  }
  for (auto it = map.begin(); it != map.end(); it++) {
    if (it->second > maxNum) {
      maxNum = it->second;
      maxTime = it->first;
    }
    else if(it->second == maxNum && it->first < maxTime) {
      maxTime = it->first;
    }
  }
  if (maxTime == 1000000001)
  cout << 0 << endl;
  else
  cout << maxTime << endl;
}