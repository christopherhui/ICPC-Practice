#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int answer(vector<vector<int>>& adj_list, int curr, map<int,int>& dp) {
  if (dp[curr] != -1) {
    return dp[curr];
  } else {
    int m = 0;
    for (int val : adj_list[curr]) {
      m = max(1+answer(adj_list, val, dp), m);
      dp[curr] = m;
    } 
    return m;
  }
}
 
int main() { 
  int n, m; cin >> n >> m;
  vector<vector<int>> adj_list(n+1);
  for (int i = 0; i < m; i++) {
    int a, b; cin >> a >> b;
    adj_list[a].push_back(b);
  }
  map<int,int> dp;
  for (int i = 1; i <= n; i++) {
    dp[i] = -1;
  }
 
  int res = -1;
  for (int i = 1; i <= n; i++) {
    res = max(res, answer(adj_list, i, dp));
  }
  cout << res << endl;
 
  return 0;
}