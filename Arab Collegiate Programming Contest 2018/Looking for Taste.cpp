#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ifstream file;
    file.open("looking.in");

    int n; file >> n;
    while (n--) {
        int n, k; file >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            file >> v[i];
        }
        int max = 0;
        for (int i = 0; i < 32; i++) {
            int maxVal = max;
            int maxIndex = 0;
            for (int j = 0; j < v.size(); j++) {
                int temp = (v[j] | maxVal);
                if (temp > maxVal) {
                    maxVal = temp;
                    maxIndex = j;
                }
            }
            max = maxVal;
            v.erase(v.begin()+maxIndex);
        }
        cout << max << endl;
    }

    return 0;
}