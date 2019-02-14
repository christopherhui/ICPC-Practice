#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i, b;
    cin >> i;
    vector<int> v;
    vector<int> s;
    while (i--) {
        cin >> b;
        v.push_back(b);
    }
    sort(v.begin(), v.end());
    bool needSecond = false;
    int thing = 0;
    for (i = 0; i < v.size(); i++) {
        if (v[i] < 0 and !needSecond) {
            thing = v[i];
            needSecond = true;
        } else if (v[i] < 0) {
            s.push_back(thing);
            s.push_back(v[i]);
            needSecond = false;
        } else if (v[i] > 0) {
            s.push_back(v[i]);
        }
    }
    if (s.size() == 0) {
        cout << v[v.size() - 1];
    } else {
        for (i = 0; i < s.size()-1; i++) {
            cout << s[i] << ' ';
        }
        cout << s[s.size() - 1];
    }

    return 0;
}