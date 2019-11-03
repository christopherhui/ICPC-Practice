#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int longestCommonSubsequence(string text1, string text2, vector<vector<int>>& dp) {
  for (int i = 1; i <= text1.size(); i++) {
    for (int j = 1; j <= text2.size(); j++) {
      if (text1[i-1] == text2[j-1]) {
        dp[i][j] = dp[i-1][j-1] + 1;
      }
      dp[i][j] = max(dp[i][j], max(dp[i][j-1], dp[i-1][j]));
    }
  }
  return dp[text1.size()][text2.size()];
}
 
int main() {
  string s1, s2; cin >> s1 >> s2;
  vector<vector<int>> dp(s1.size()+1, vector<int>(s2.size()+1, 0));
  int count = longestCommonSubsequence(s1, s2, dp); string s = "";
  int i = s1.size(), j = s2.size();
  while (i > 0 && j > 0) {
    if (dp[i-1][j-1]+1 == dp[i][j] && dp[i-1][j]+1 == dp[i][j] && dp[i][j-1]+1 == dp[i][j]) {
      i--; j--; 
      s = s1[i] + s;
    }
    else if (dp[i][j-1] > dp[i-1][j]) {
      j--;
    } else {
      i--;
    }
  }
  cout << s << endl;
 
  // for (int i = 0; i <= s1.size(); i++) {
  //   for (int j = 0; j <= s2.size(); j++) {
  //     cout << dp[i][j] << ' ';
  //   }
  //   cout << endl;
  // }
 
  return 0;
}