#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int count = 0, nextNumber = INT_MAX;
    vector<int> v(1e4 + 2);
    for (int i = 0; i < N; i++) {
        int a; cin >> a;
        v[a]++;
        nextNumber = min(nextNumber, a);
    }
    while (nextNumber < 1e4 + 2) {
        for (int i = nextNumber; i < 1e4 + 2; i++) {
            if (v[i] <= 0) {
                break;
            }
            v[i]--;
        }
        while (v[nextNumber] == 0 && nextNumber < 1e4 + 2) {
            nextNumber++;
        }
        count++;
    }
    cout << count << endl;
}
