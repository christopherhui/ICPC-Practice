#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/* This solution could work, but only
   if you changed ints to long longs and
   initialize your maps properly
*/
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int l, f, m, k; cin >> l >> f >> m;
  vector<string> songCombo;

  map<vector<string>, int> typesLead;
  map<vector<string>, int> typesFollower;

  for (int i = 0; i < l; i++) {
    vector<string> songKnown;
    cin >> k;
    for (int songs = 0; songs < k; songs++) {
      string song; cin >> song;
      songKnown.push_back(song);
    }
    sort(songKnown.begin(), songKnown.end());
    typesLead[songKnown]++;
  }

  for (int i = 0; i < f; i++) {
    vector<string> songKnown;
    cin >> k;
    for (int songs = 0; songs < k; songs++) {
      string song; cin >> song;
      songKnown.push_back(song);
    }
    sort(songKnown.begin(), songKnown.end());
    typesFollower[songKnown]++;
  }

  double sum = 0;
  for (auto it1 = typesLead.begin(), it2 = typesFollower.begin(); it1 != typesLead.end(); it1++, it2++) {
    sum += 1.0/3 * min(it1->second, it2->second) * it1->first.size();
  }
  sum *= m;
  cout << fixed << setprecision(10) << sum;

  return 0;
}