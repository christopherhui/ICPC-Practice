#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int DFS(vector<vector<int> > graph, int start, int n) {
  stack<int> q;
  vector<bool> visited(n+1, false);
  int count = 1;
  visited[start] = true;
  q.push(start);
  while (q.size() != 0) {
    int temp = q.top(); q.pop();
    for (int i = 0; i < graph[temp].size(); i++) {
      if (!visited[graph[temp][i]]) {
        q.push(graph[temp][i]);
        count++;
        visited[graph[temp][i]] = true;
      }
    }
  }
  return count;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m; cin >> n >> m;
  vector<vector<int> > adjList(n+1, vector<int>());
  vector<int> disUnion(n+1, -1); vector<int> ans(n+1);
  for (int i = 0; i < m; i++) {
    int k, a; cin >> k; if (k > 0) cin >> a;
    for (int j = 1; j < k; j++) {
      int b; cin >> b;
      adjList[a].push_back(b);
      adjList[b].push_back(a);
      disUnion[b] = a;
    }
  }

  for (int i = 1; i <= n; i++) {
    int answer;
    if (disUnion[i] == -1) {
      ans[i] = DFS(adjList, i, n);
      answer = ans[i];
    }
    else {
      int temp = i;
      while (disUnion[temp] != -1) {
        temp = disUnion[temp];
      }
      answer = ans[temp];
    }
    cout << answer << ' ';
  }

  return 0;
}