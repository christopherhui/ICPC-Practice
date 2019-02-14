#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string month; cin >> month; int i; cin >> i;
  if (month == "January") i += 1;
  if (month == "February") i += 2;
  if (month == "March") i += 3;
  if (month == "April") i += 4;
  if (month == "May") i += 5;
  if (month == "June") i += 6;
  if (month == "July") i += 7;
  if (month == "August") i += 8;
  if (month == "September") i += 9;
  if (month == "October") i += 10;
  if (month == "November") i += 11;
  if (month == "December") i += 12;
  i = i % 12;
  if (i == 0) cout << "December";
  if (i == 1) cout << "January";
  if (i == 2) cout << "February";
  if (i == 3) cout << "March";
  if (i == 4) cout << "April";
  if (i == 5) cout << "May";
  if (i == 6) cout << "June";
  if (i == 7) cout << "July";
  if (i == 8) cout << "August";
  if (i == 9) cout << "September";
  if (i == 10) cout << "October";
  if (i == 11) cout << "November";

  return 0;
}