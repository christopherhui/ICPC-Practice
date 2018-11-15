#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    map<int, int> map;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        arr[i] = a;
        map[arr[i]] += 1;
    }
    if (map.size() == 1) {
      cout << 0; return 0;
    }
    int m; cin >> m;
    int count = 0;
    while (m--) {
        int b, c; cin >> b >> c;
        map[arr[b-1]] -= 1;
        arr[b-1] = c;
        map[arr[b-1]] += 1;
        count += 1;
        if (map[arr[b-1]] == n) {
          cout << count; return 0;
        }
    }
    cout << -1;
    return 0;
}
