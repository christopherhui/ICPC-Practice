#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
	cin.tie(0); 
  cout.tie(0);

  ll n, a; cin >> n;
  priority_queue <ll, vector<ll>, greater<ll> > pq;
  ll jack = 0; ll ferrante = 0;
  
  for (int i = 0; i < n; i++) {
    cin >> a;
    pq.push(a);
    if (i % 2 == 1) {
      ferrante += pq.top();
      pq.pop();
    }
  }

  while (!pq.empty()) {
    jack += pq.top();
    pq.pop();
  }
  cout << jack << ' ' << ferrante;

  return 0;
}
