#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string word;
  cin >> word;
  int a = word.length();
  char string_array[a];
  char found_array[a];
  strcpy(string_array, word.c_str());
  for (int i = 0; i < a; i++) {
    found_array[i] = '_';
  }
  int n;
  char let;
  cin >> n;
  while (n--) {
    cin >> let;
    for (int j = 0; j < a; j++) {
      if (string_array[j] == let) {
        found_array[j] = let;
      }
    }
    for (int l = 0; l < a; l++) {
      cout << found_array[l];
    }
    cout << endl;
  }
  return 0;
}