#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, H; cin >> L >> H; int k; cin >> k;
    vector<vector<char>> laptop(H, vector<char>(L, '_'));
    int i = 0;
    while (k--) {
        int l, h, a, b; cin >> l >> h >> a >> b;
        for (int j = b; j < min(H, b + h); j++) {
            for (int z = a; z < min(L, a + l); z++) {
                laptop[j][z] = 'a' + i;
            }
        }
        i++;
    }
    for (vector<char>& c : laptop) {
        for (char ch : c) {
            cout << ch;
        }
        cout << endl;
    }
}
