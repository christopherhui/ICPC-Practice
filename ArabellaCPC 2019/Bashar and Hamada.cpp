#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     
  int n, sum = 0, temp; cin >> n; bool start = 1;
  vector<int> v(n); vector<int> keep;
  for (int i = 0; i < n; i++) cin >> v[i];
  sort(v.begin(), v.end());
  keep.push_back(v[0]); keep.push_back(v[v.size()-1]);
  sum += abs(keep[0]-keep[1]); cout << sum << ' ';
  for (int i = 1; i < n-1; i++) {
    temp = start ? v[i] : v[v.size()-1-i];
    for (int j = 0; j < keep.size(); j++) sum += abs(temp-keep[j]);
    keep.push_back(temp);
    start = start ? 0 : 1;
    cout << sum << ' ';
  }
  return 0;
}