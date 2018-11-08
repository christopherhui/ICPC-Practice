#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  vector<int> v;
  bool status;
  int max = 0;

  while (n--) {
    int a;
    int b = 0;
    cin >> b;
    v.push_back(b);
    a++;
  }
  if (v[0] > 0) {
    status = 1;
    max++;
  }
  else {
    status = 0;
    max++;
  }

  for (int i = 1; i < v.size(); i++) {
    if (v[i] > 0 && !status) {
      status = 1;
      max++;
    }
    else if(v[i] < 0 && status) {
      status = 0;
      max++;
    }
  }
  cout << max;

  return 0;
}