#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // ifstream file;
    // file.open("test.in");
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    sort(input.begin(), input.end());
    int minT = input[0] + input[n - 1];
    for (int i = 0; i < n; i++)
    {
        minT = min(minT, input[i] + input[n - 1 - i]);
    }

    cout << minT << endl;
}