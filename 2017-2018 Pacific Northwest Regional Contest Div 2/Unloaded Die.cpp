#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  double one, two, three, four, five, six;
  cin >> one >> two >> three >> four >> five >> six;
  double eOne, eTwo, eThree, eFour, eFive, eSix;
  eOne = one; eTwo = two*2; eThree = three*3; eFour = four*4; eFive = five*5; eSix = six*6;
  double smallest, difference;

  if (round((eOne+eTwo+eThree+eFour+eFive+eSix) * 1000.0) / 1000.0 == 3.5) {
    cout << fixed << setprecision(3) << 0.000;
  }
  else {
    smallest = INT_MAX;
    difference = 1 - (3.5 - (eTwo+eThree+eFour+eFive+eSix))/one;
    if (smallest > abs(difference)) {
      smallest = abs(difference);
    }
    difference = 2 - (3.5 - (eOne+eThree+eFour+eFive+eSix))/two;
    if (smallest > abs(difference)) {
      smallest = abs(difference);
    }
    difference = 3 - (3.5 - (eOne+eTwo+eFour+eFive+eSix))/three;
    if (smallest > abs(difference)) {
      smallest = abs(difference);
    }
    difference = 4 - (3.5 - (eOne+eThree+eTwo+eFive+eSix))/four;
    if (smallest > abs(difference)) {
      smallest = abs(difference);
    }
    difference = 5 - (3.5 - (eOne+eThree+eFour+eTwo+eSix))/five;
    if (smallest > abs(difference)) {
      smallest = abs(difference);
    }
    difference = 6 - (3.5 - (eOne+eThree+eFour+eFive+eTwo))/six;
    if (smallest > abs(difference)) {
      smallest = abs(difference);
    }

    cout << fixed << setprecision(3) << abs(smallest);
  }

  return 0;
}