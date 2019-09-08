#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int n; cin >> n;
  while (n--) {
    vector<int> usa(3); int sumU = 0;
    vector<int> russia(3); int sumR = 0;
    for (int i = 0; i < 3; i++) {
      cin >> usa[i];
      sumU += usa[i];
      cout << usa[i] << ' ';
    }
    for (int i = 0; i < 3; i++) {
      cin >> russia[i];
      sumR += russia[i];
      cout << russia[i] << ' ';
    }

    bool count = 0; bool color = 0;
    if (sumU > sumR) count = 1;
    for (int i = 0; i < 3; i++) {
      if (usa[i] > russia[i]) {
        color = 1;
        break;
      }
      else if(usa[i] < russia[i]) {
        break;
      }
    }
    cout << endl;

    if (count && color) cout << "both" << endl;
    else if (count) cout << "count" << endl;
    else if (color) cout << "color" << endl;
    else cout << "none" << endl;
    cout << endl;
  }

  return 0;
}