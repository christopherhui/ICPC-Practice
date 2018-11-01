#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int a,b,c,d,e,f;
  cin >> a >> b >> c >> d >> e >> f;
  bool found = false;

  int one = a+c+e-b-d-f;
  int two = a+d+e-b-c-f;
  int three = a+c+f-b-d-e;
  int four = a+d+f-b-c-e;
  int five = b+c+e-a-d-f;
  int six = b+d+e-a-c-f;
  int seven = b+c+f-a-d-e;
  int eight = b+d+f-a-c-e;

  if (one == 0 || two == 0 || three == 0 || four == 0 || five == 0 || six == 0 || seven == 0 || eight == 0) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }


  return 0;
}