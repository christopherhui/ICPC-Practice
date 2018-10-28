#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, a, b;
  cin >> n;
  cout << n << ':' << endl;

  for (int i = 2; i < n/2+2; i++) {
    a = i;
    for (int j = i-1; j <= i; j++) {
      int temp = n;
      b = j;
      bool start = 1;
      while (temp > 0) {
        if (start) {
          temp -= a;
          start = 0;
        }
        else {
          temp -= b;
          start = 1;
        }
      }

      if (temp == 0) {
        cout << a << ',' << b << endl;
      }
    }
  }

  return 0;
}