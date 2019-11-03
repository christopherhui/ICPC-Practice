#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
bool cmp(pair<string,string> one, pair<string,string> two) {
    return (one.second == two.second) ? one.first < two.first : one.second < two.second; 
}
     
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
    int n; cin >> n;
    vector<pair<string,string>> v;
    for (int i = 0; i < n; i++) {
        string s1, s2; cin >> s1 >> s2;
        v.push_back(make_pair(s1,s2));
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}