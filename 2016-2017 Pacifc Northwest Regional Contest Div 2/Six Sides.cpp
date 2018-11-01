#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int arrFirst[6];
  int arrSecond[6];
  int a;
  double count = 0;
  double same = 0;
  for (int i = 0; i < 6; i++) {
    cin >> a;
    arrFirst[i] = a;
  }
  for (int j = 0; j < 6; j++) {
    cin >> a;
    arrSecond[j] = a;
  }

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      if (arrFirst[i] > arrSecond[j]) {
        count++;
      }
      else if(arrFirst[i] == arrSecond[j]) {
        same++;
      }
    }
  }

  cout << fixed << setprecision(5) << count/36 + (same/2)/36;

  return 0;
}