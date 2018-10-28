#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll n, sum, start, end, temp, target;
  cin >> n;
  sum = 0;
  sum = (n * (n+1))/2 - n;

  start = 1;
  end = n-1;
  temp = end;
  if (sum % 2 == 0) {
    target = sum / 2;
  }
  else {
    target = sum / 2 + 1;
  }

  while (target > 0) {
    target -= end;
    end--;
    start++;
    temp--;
  }
  cout << start-1;

  return 0;
}