#include <bits/stdc++.h>
#define EPS 1e-8;
#define nl '\n';
using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> pt;
typedef vector<pt> pol;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<ld> vd;
typedef vector<vd> vvd;
typedef pair<ll, ll> pii;
typedef vector<pii> vpii;

// computes RMQ
struct segtree
{
    vector<int> arr; // initialized to all 0s
    int n;
    segtree(int n) : arr(2*n), n(n) {}

    void init(vector<int>& v) {
        for (int i = n; i < 2*n; i++) {
            arr[i] = v[i-n];
        }
        for (int i = n-1; i > 0; i--) {
            arr[i] = min(arr[i*2], arr[i*2+1]);
        }
    }

    // query the half-open range [l,r) at node i
    int query(int x, int y, int i, int l, int r)
    {
        int mid = (r - l)/2 + l;
        if (x <= l && r <= y) return arr[i];
        else if (x < r && l < y)
            return min(query(x,y,2*i,l,mid),query(x,y,2*i+1,mid,r));
        else return INT_MAX;
    }
    int query(int x, int y)
    {
        return query(x,y,1,0,n);
    }
    // point update the point p to be val;
    void update(int p, int val)
    {
        int i = p+n;
        arr[i] = val;
        for (i = i/2; i > 0; i /= 2)
            arr[i] = min(arr[2*i],arr[2*i+1]);
    }
};

int highestPowerof2(int n)
{
    int p = (int)log2(n);
    return (int)pow(2, p+1);
}

// Credit to: https://cp-algorithms.com/graph/lca.html
void euler_tour(vvi& adj_list, vector<bool>& visited, vector<int>& euler, vector<int>& height, vector<int>& first, int node, int h = 0) {
    visited[node] = true;
    first[node] = euler.size();
    euler.push_back(node);
    height.push_back(h);
    for (auto to : adj_list[node]) {
        if (!visited[to]) {
            euler_tour(adj_list, visited, euler, height, first, to, h+1);
            euler.push_back(node);
            height.push_back(h);
        }
    }
}

void bfs(vector<vector<int>>& adj_list, vector<int>& level) {
    int start = 0;
    queue<pair<int, int>> q;
    q.push({1, 0});
    while (!q.empty()) {
        pair<int, int> curr = q.front(); q.pop();
        level[curr.first] = curr.second;
        for (int children : adj_list[curr.first]) {
            q.push({children, curr.second + 1});
        }
    }
}

int main() {
    int N, M; cin >> N >> M;
    vvi adj_list(N + 1);
    vector<bool> visited(N + 1);
    vector<int> euler;
    vector<int> height;
    vector<int> first(N + 1);
    for (int i = 2; i <= N; i++) {
        int parent; cin >> parent;
        adj_list[parent].push_back(i);
        adj_list[i].push_back(parent);
    }
    euler_tour(adj_list, visited, euler, height, first, 1);
    segtree sg(highestPowerof2(height.size()));
    sg.init(height);

    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        int first_val = first[a];
        int second_val = first[b];
        int temp = second_val;
        if (height[first_val] <= height[second_val]) {
            cout << "Yes" << endl;
            continue;
        }
        if (first_val > second_val) {
            swap(first_val, second_val);
        }
        int lca_height = sg.query(first_val, second_val+1);
        if (lca_height != height[temp]) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}
