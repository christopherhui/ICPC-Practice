#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n; cin >> n;
  vector<int> vals(n);
  queue<int> needSwapping;
  vector<pair<int,int> > swappedVals;
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> vals[i];
    if (i+1 == vals[i]) needSwapping.push(i+1);
  }
  while (needSwapping.size() > 1) {
    int first = needSwapping.front(); needSwapping.pop();
    int second = needSwapping.front(); needSwapping.pop();
    swappedVals.push_back(make_pair(first, second));
    swap(vals[first-1], vals[second-1]);
    count++;
  }
  if (needSwapping.size() == 1) {
    int last = needSwapping.front();
    for (int i = 0; i < n; i++) {
      if (last != i+1 && last != vals[i]) {
        swappedVals.push_back(make_pair(last, vals[i]));
        count++;
        break;
      }
    }
  }

  cout << count << '\n';
  for (auto vals : swappedVals) {
    cout << vals.first << ' ' << vals.second << '\n';
  }

  return 0;
