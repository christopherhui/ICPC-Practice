#include <bits/stdc++.h>
#include<string>
 
using namespace std;
typedef long long ll;
typedef long double ld;
 
/*
g++ m-magic.cpp -o k
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
        int n, m, p;
	int count = 0;
	bool fail;
	cin >> n;
	int k[n];
	string op[n];
	for(int j = 0; j < n; j++) {
		cin >> op[j] >> k[j];
	}
 
	for(p = 1; p < 101; p++) {
		m = p;
		fail = false;
    		for(int i = 0; i < n; i++) {
			if(op[i] == "SUBTRACT") {
				//cout << m - k[i] << endl;
				if(m - k[i] < 0) {
					fail = true;
					break;
				} else
					m = m - k[i];
			} else if(op[i] == "ADD") {
				m = m + k[i];
			} else if(op[i] == "MULTIPLY") {
				m = m * k[i];
			} else { // "DIVIDE"
				if(m % k[i] != 0) {
					fail = true;
					break;
				} else
					m = m / k[i];
			}
		}
		if(fail) {
			count++;
		}
	}
	cout << count << endl;
 
    return 0;
}