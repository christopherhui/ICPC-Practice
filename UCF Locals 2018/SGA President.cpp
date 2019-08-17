#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; cin >> n; unordered_map<char, int> charCount; unordered_map<string, int> name; ll count = 0; 
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        charCount[s[0]]++;
        name[s]++;
    }
    for (auto it = name.begin(); it != name.end(); it++) {
        count += (charCount[it->first[0]]-it->second) * it->second;
    }
    cout << count << endl;
    
    return 0;
}