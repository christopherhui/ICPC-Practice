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

    string s;
    cin >> s;
    int count = 0;
    unordered_map<char, int> m;
    for (char c : s)
    {
        if (m.find(c) == m.end())
        {
            count++;
        }
        m[c]++;
    }
    char argMax1;
    int max1 = -1;
    char argMax2;
    int max2 = -1;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > max1)
        {
            argMax1 = it->first;
            max1 = it->second;
        }
    }
    m[argMax1] = -1;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > max2)
        {
            argMax2 = it->first;
            max2 = it->second;
        }
    }

    if (count > 2)
    {
        cout << s.size() - (max1 + max2) << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}