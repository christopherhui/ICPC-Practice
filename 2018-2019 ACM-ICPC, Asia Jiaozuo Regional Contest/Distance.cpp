#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// Wrong answer on test 2

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll t; cin >> t;
  while (t--) {
    ll n, prevSum = 0, alternate = 0, sum = 0, countUp = -1; cin >> n; ll cnt = n; ll countDown = n-1;
    ll diff[n-1]; ll chose[n], prefSum[n];
    prefSum[0] = 0;
    for (int i = 0; i < n-1; i++) {
      cin >> diff[i];
      if (i == 0) {
        prefSum[i+1] = diff[i];
      }
      else {
        prefSum[i+1] = prefSum[i] + diff[i];
      }
    }
    for (int i = 0; i < n; i++) {
      chose[i] = 0;
    }
    ll cur_sum = 0;
    for (int i = 0; i < n; i++) {
      if (alternate == 0) {
        ll j = countUp;
            /*
            for (int k = 0; k < n; k++) {
              if (chose[k] == 1) {
                sum += abs(prefSum[j] - prefSum[k]);
              }
            }
            */
            //cur_sum += prefSum[countDown] - prefSum[countUp];
            chose[j] = 1;
            prevSum += sum;
            alternate = 1;
            sum += cur_sum;
            cout << sum;
            //sum = 0;
            //cout << prevSum;
            if (cnt != 1) {
              cout << ' ';
            }
            cnt--;
            countUp++;
          }

      else if (alternate == 1) {
        ll j = countDown;
          if (chose[j] == 0) {
             /*
            for (int k = 0; k < n; k++) {
              if (chose[k] == 1) {
                sum += abs(prefSum[j] - prefSum[k]);
              }
            }
            */
            cur_sum += prefSum[countDown] - prefSum[countUp];
            chose[j] = 1;
            sum += cur_sum;
            cout << sum;
            prevSum += sum;
            alternate = 0;
            //sum = 0;
            //cout << prevSum;
            if (cnt != 1) {
              cout << ' ';
            }
            cnt--;
            countDown--;
          }
        }
      }
  }

  return 0;
}