#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

  ifstream file;
  file.open("balls.in");

  int t; file >> t;
  for (int test = 0; test < t; test++) {
    int r; int c; file >> r >> c;
    vector<ll> ballLoc(c);
    vector<ll> ptLoc(c);
    vector<vector<char> > grid(r, vector<char>(c));
    vector<vector<ll> > dp(r+1, vector<ll>(c));

    for (int i = 0; i < c; i++)
      file >> ballLoc[i];
    for (int y = 0; y < r; y++) {
      for (int x = 0; x < c; x++) {
        char val; file >> val;
        grid[y][x] = val;
      }
    }
    for (int x = 0; x < c; x++) {
      file >> ptLoc[x];
      dp[r][x] = ptLoc[x];
    }

    for (int y = r-1; y >= 0; y--) {
      for (int x = 0; x < c; x++) {
        if (grid[y][x] == '\\' || grid[y][x] == '/') {
          dp[y][x] = max(max(x+1 < c ? dp[y+1][x+1]: -1, x-1 >= 0 ? dp[y+1][x-1] : -1), dp[y+1][x]);
        }
        else {
          dp[y][x] = dp[y+1][x];
        }
      }
    }

    ll count = 0;
    for (int x = 0; x < c; x++) {
      count += dp[0][x] * ballLoc[x];
    }
    cout << count << endl;
  }

  return 0;
}