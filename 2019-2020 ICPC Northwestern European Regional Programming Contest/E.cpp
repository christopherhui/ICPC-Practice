#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<double> a(4); double e;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> e;
    sort(a.begin(), a.end());

    double low = a[0]-0.5, high = a[3]+0.5;
    while (high-low > 1e-8) {
        double mid = low + (high-low)/2;
        if ((a[1]+a[2]+mid)/3 > e) {
            high = mid;
        }
        else {
            low = mid;
        }
    }
    double sum = a[1]+a[2]+a[3];
    if (a[0]-low > 1e-8) {
        cout << "impossible" << endl;
    }
    else if (low-a[3] > 1e-8) {
        cout << "infinite" << endl;
    }
    else {
        cout << fixed << setprecision(2) << low << endl;
    }

    return 0;
}