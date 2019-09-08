#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int calculateSugar(double c, double s, double ps, double carry) {
  double ans = ((c*s-carry)/80);
  return ceil(ans)*ps;
}

int helper(double c, double s, double carry) {
  double ans = (c*s-carry)/80;
  return ceil(ans);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int n; cin >> n;
  while (n--) {
    int d, x, s; cin >> d >> x >> s;
    vector<int> lemons(d);
    vector<int> sugar(d);

    vector<int> priceLemons(d);
    vector<int> priceSugars(d);

    int c, pl, ps; cin >> c >> pl >> ps;
    int carryOver = 0;
    lemons[0] = c*x*pl;
    sugar[0] = calculateSugar(c, s, ps, carryOver);
    carryOver = 80*helper(c,s, carryOver)-c*s;
    priceLemons[0] = pl;
    priceSugars[0] = ps;

    for (int i = 1; i < d; i++) { // i is days
      int c, pl, ps; cin >> c >> pl >> ps;
      lemons[i] = c*x*pl + lemons[i-1];
      sugar[i] = calculateSugar(c, s, ps, carryOver) + sugar[i-1];

      priceLemons[i] = pl;
      priceSugars[i] = ps;

      for (int j = 0; j < i; j++) { // j is prev days
        lemons[i] = min(lemons[i], c*x*priceLemons[j] + lemons[i-1]);
        if (sugar[i] > calculateSugar(c, s, priceSugars[j], carryOver) + sugar[i-1]) {
          sugar[i] = calculateSugar(c, s, priceSugars[j], carryOver) + sugar[i-1];
          carryOver = 80*helper(c,s, carryOver)-c*s;
        }
      }
    }
    cout << sugar[d-1] + lemons[d-1] << endl;
  }

  return 0;
}