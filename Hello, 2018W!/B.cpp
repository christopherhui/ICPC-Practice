#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
	cin.tie(0); 
  cout.tie(0);

  ll t; 
  cin >> t;
  map<string, ll> map;
  while (t--) {
    string a;
    ll b; 
    cin >> a >> b;
    map[a] = b;
  }
  ll min = -1;
  string person = "";
  for (auto it = map.begin(); it != map.end(); it++) {
    if (it->second > min) {
      person = it->first;
      min = it->second;
    }
  }
  cout << person;
}