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

bool test(vector<int>& values, int val, int K) {
    int minute = 0;
    int count = 0;
    int i = 0;
    while (i < values.size()) {
        if (count == K) {
            return true;
        }
        while (values[i] <= minute) {
            i++;
        }
        if (i + val > values.size()) {
            return false;
        }
        i += val;
        count++;
        minute++;
    }
    return count == K;
}

int main() {
    int N, K; cin >> N >> K;
    vector<int> values(N);
    for (int i = 0; i < N; i++) {
        cin >> values[i];
    }
    sort(values.begin(), values.end());
    int low = 0, high = N;
    while (low < high) {
        int mid = low + (high - low) / 2 + 1;
        if (!test(values, mid, K)) {
            high = mid - 1;
        }
        else {
            low = mid;
        }
    }
    cout << low;
}