#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a, int b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

int main() {
  ios::sync_with_stdio(0);
	cin.tie(0);
  cout.tie(0);

  int a, b;
  cin >> a >> b;

  cout << lcm(a, b);

}