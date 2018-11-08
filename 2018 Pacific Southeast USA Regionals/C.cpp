#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, a, b, num, numCorrect;
  bool found = false;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    v.push_back(a);
    v.push_back(b);
  }

  for (int i = 0; i < n; i++) {
    num = n - i;
    numCorrect = num;
    for (int i = 0; i < v.size(); i+= 2) {
      if (numCorrect >= v[i] && numCorrect <= v[i+1]) {
        num--;
      }
    }
    if (num == 0) {
      found = true;
      cout << numCorrect;
      break;
    }
  }

  if (!found) {
    cout << -1;
  }
  return 0;
}