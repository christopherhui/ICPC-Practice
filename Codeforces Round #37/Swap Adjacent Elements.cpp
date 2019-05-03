#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); 
  cout.tie(0);

  int n; cin >> n;
  vector<int> vals(n);
  string swap;
  for (int i = 0; i < n; i++) {
    cin >> vals[i];
  }
  cin >> swap; swap += '0';

  int start, end, length = 0;
  for (int i = 0; i < swap.size(); i++) {
    if (swap[i] == '1') {
      length++;
    }
    else {
      if (length > 0) {
        end = i+1;
        start = i-length;
        sort(max(vals.begin()+start, vals.begin()), min(vals.begin()+end, vals.end()));
        length = 0;
      }
    }
  }

  if (is_sorted(vals.begin(), vals.end())) cout << "YES";
  else cout << "NO";

  return 0;
}