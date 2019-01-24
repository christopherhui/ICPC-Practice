#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin>>n;
  vector<vector<int>> grid(n, vector<int>(3));

  for(int i=0; i<n; i++){
      cin>>grid[i][0]>>grid[i][1]>>grid[i][2];
  }

  for(int i=1; i<n; i++){
      grid[i][0] += max(grid[i-1][1], grid[i-1][2]);
      grid[i][1] += max(grid[i-1][0], grid[i-1][2]);
      grid[i][2] += max(grid[i-1][1], grid[i-1][0]);
  }
  int maxm = -1;
  for(int i=0; i<3; i++) maxm = max(grid[n-1][i], maxm);
    cout<<maxm<<endl;
  return 0;
}