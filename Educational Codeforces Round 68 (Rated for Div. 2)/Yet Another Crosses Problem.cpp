#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
  int q; cin >> q;
  while (q--) {
    vector<pair<int,int> > ver; vector<pair<int, int> > hor;
    int n, m, verMax = 0, horMax = 0; cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) cin >> grid[i];
    for (int i = 0; i < n; i++) {
      int countHor = 0, countVer = 0;
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == '*')  {
          countHor++;
        }
      }
        hor.push_back(make_pair(i, countHor));
      
    }
    for (int i = 0; i < m; i++) {
      int countVer = 0; 
      for (int j = 0; j < n; j++) {
        if (grid[j][i] == '*') countVer++;
      }
 
        ver.push_back(make_pair(i, countVer));
      
    }
    int minVal = INT_MAX;
    for (int i = 0; i < ver.size(); i++) {
      for (int j = 0; j < hor.size(); j++) {
        if (grid[hor[j].first][ver[i].first] == '.') minVal = min(max(n-ver[i].second+m-hor[j].second-1, 0), minVal);
        else minVal = min(minVal, n-ver[i].second+m-hor[j].second);
      }
    }
    cout << min(n+m-1, minVal) << endl;
  }
  
  return 0;
}