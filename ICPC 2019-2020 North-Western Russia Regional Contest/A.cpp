#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,n; cin >> a >> b >> n;
    cout << 2*((n-b+b-a-1)/(b-a))+1 << endl;

    return 0;
}