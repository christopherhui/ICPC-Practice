#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
  string s; cin >> s;
  int count = 0, amt = 0, countO = 0;
  vector<int> pairs; vector<int> oss;
  for (int i = 0; i < s.size()-1; i++) {
    if (s[i] == 'v' && s[i+1] == 'v') {
      amt += 1;
    }
    else {
      if (s[i] == 'o') countO += 1;
      if (amt != 0) {
        pairs.push_back(amt);
        amt = 0;
      if (countO > 0) {
        oss.push_back(countO);
        countO = 0;
      }
      }
    }
  }
  if (amt != 0) {
    pairs.push_back(amt);
  }
  if (countO > 0) {
    oss.push_back(countO);
    countO = 0;
  }
  if (pairs.size() > 1) {
    count = 0;
    for (int i = 0; i < pairs.size(); i++) {
      for (int j = i+1; j < pairs.size(); j++) {
        count += pairs[j] * pairs[i] * accumulate(oss.begin()+i, oss.begin()+j, 0);
      }
    }
  }
  cout << count << endl;
 
  return 0;
}