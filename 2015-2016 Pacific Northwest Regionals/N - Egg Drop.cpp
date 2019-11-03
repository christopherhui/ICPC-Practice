#include <bits/stdc++.h>
#include<string>
 
using namespace std;
typedef long long ll;
typedef long double ld;
 
/*
g++ n-egg.cpp -o k
 
2 10
4 SAFE
7 BROKEN
 
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
	
	int n, k;
	cin >> n >> k;
	int flr[n];
	string out[n];
	for(int i = 0; i < n; i++)
		cin >> flr[i] >> out[i];
 
	int lo = 1; int hi = k;
	for(int i = 0; i < n; i++) {
		if(out[i] == "SAFE") {
			if(lo < flr[i]) lo = flr[i];
		} else {
			if(hi > flr[i]) hi = flr[i];
		}
	}    
	if(lo < k) lo++;
	if(hi > 1) hi--;
	cout << lo << " " << hi << endl;
 
    return 0;
}
 