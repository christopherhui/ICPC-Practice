#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string district; int floors;
  cin >> district >> floors;
  if (district == "residential") {
    if (floors == 1) cout << 0;
    else if(floors <= 5) cout << 1;
    else if(floors <= 10) cout << 2;
    else if(floors <= 15) cout << 3;
    else if(floors <= 20) cout << 4;
  }
  else if(district == "commercial") {
    if (floors == 1) cout << 0;
    else if(floors <= 7) cout << 1;
    else if(floors <= 14) cout << 2;
    else if(floors <= 20) cout << 3;
  }
  else if(district == "industrial") {
    if (floors == 1) cout << 0;
    else if(floors <= 4) cout << 1;
    else if(floors <= 8) cout << 2;
    else if(floors <= 12) cout << 3;
    else if(floors <= 16) cout << 4;
    else if(floors <= 20) cout << 5;
  }

  return 0;
}