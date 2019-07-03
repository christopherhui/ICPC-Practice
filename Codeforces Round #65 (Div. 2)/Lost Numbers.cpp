#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  vector<int> p(6);
  p[0] = 4; p[1] = 8; p[2] = 15; p[3] = 16; p[4] = 23; p[5] = 42;
  int total = 4*8*15*16*23*42;
  vector<int> newArr(6);
  int first, second, third, fourth;
  cout << "? " << 1 << ' ' << 3 << endl;
  cin >> first;
  cout << "? " << 1 << ' ' << 4 << endl;
  cin >> second;
  cout << "? " << 2 << ' ' << 2 << endl;
  cin >> third;
  cout << "? " << 5 << ' ' << 5 << endl;
  cin >> fourth;
  for (int val : p) {
    if (first % val == 0 && second % val == 0 &&
    find(p.begin(), p.end(), first/val) != p.end() && find(p.begin(), p.end(), second/val) != p.end()) {
      newArr[0] = val;
      newArr[2] = first/val;
      newArr[3] = second/val;
      break;
    }
  }
  newArr[1] = sqrt(third);
  newArr[4] = sqrt(fourth);
  newArr[5] = total / (newArr[0]*newArr[1]*newArr[2]*newArr[3]*newArr[4]);
  cout << "! " << newArr[0] << ' ' << newArr[1] << ' ' << newArr[2] << ' '
  << newArr[3] << ' ' << newArr[4] << ' ' << newArr[5] << endl;

  return 0;
}