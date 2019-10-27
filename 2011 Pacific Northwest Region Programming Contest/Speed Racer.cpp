#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

bool answer(double a, double b, double c, double d, double m, double v, double t) {
  double time = m/v;
  double litersLost = a*pow(v,4)+b*pow(v,3)+c*pow(v,2)+d*v;
  double litersUsed = time*litersLost;
  return litersUsed <= t;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  double a, b, c, d, m, t; 
  while (cin >> a) {
    cin >> b >> c >> d >> m >> t;
    double low = 0, high = 1000, v = (low+high)/2; 
    while (high-low > 1e-6) {
      double v = (low+high)/2;
      if (answer(a,b,c,d,m,v,t)) {
        low = v;
      } else {
        high = v;
      }
    }
    cout << fixed << setprecision(2) << floorf(low*100)/100 << endl;
  }

  return 0;
} 