#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int w, h, d; cin >> w >> h >> d;
  cout << (w >= d*2 && h >= d*2) ? (w-d*2)*(h-d*2) : 0;
 
  return 0;
}