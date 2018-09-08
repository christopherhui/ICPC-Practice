#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); 
  cout.tie(0);

  ll n, r;
  cin >> n >> r;
  ll graph[n][n];
  for (int i = 0; i < sizeof(graph)/sizeof(graph[0]); i++) {
    for (int j = 0; j < sizeof(graph)/sizeof(graph[0]); j++) {
      graph[i][j] = 0;
    }
  }

  while (r--) {
    ll a, b, c;
    cin >> a >> b >> c;
    graph[a-1][b-1] = c;
    graph[b-1][a-1] = c;
  }
  ll q; 
  cin >> q;

  while (q--) {
    ll x, y;
    cin >> x >> y;
	ll sum = graph[x-1][y-1];

	ll parent[n]; 
    ll key[n];   
    bool mstSet[n];  
 
    for (int i = 0; i < n; i++) {
       key[i] = INT_MAX, mstSet[i] = false;
	}
	
    key[x] = 0;
	key[y] = 0;
    parent[x] = -1;
	parent[y] = -1;
 
    for (int count = 0; count < n-1; count++)
    {
        ll min = INT_MAX, min_index;
 
		for (int v = 0; v < n; v++) {
			if (mstSet[v] == false && key[v] < min) {
				min = key[v], min_index = v;
			}
		}
		ll u = min;
 
        mstSet[u] = true;
 
        for (int v = 0; v < n; v++) {
 
			if (graph[u][v] && mstSet[v] == false && graph[u][v] <  key[v]) {
				parent[v] = u, key[v] = graph[u][v];
				sum += u;
			}
		}
    }
	cout << sum << endl;
  }
  
  return 0;
}
