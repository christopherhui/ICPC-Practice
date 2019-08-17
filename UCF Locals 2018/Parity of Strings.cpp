#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    unordered_map<char, int> m;
    int odd = 0, even = 0; 
    string s; cin >> s;
    for (char c : s) m[c]++;
    for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second % 2 == 0) even++;
        else odd++;
    }
    if (even >= 1 && odd >= 1) cout << 2 << endl;
    else if(even) cout << 0 << endl;
    else cout << 1 << endl;
 
  return 0;
}