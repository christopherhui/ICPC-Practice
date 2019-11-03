#include <bits/stdc++.h>
#include<string>
#include<set>
#include<cmath>
 
using namespace std;
typedef long long ll;
typedef long double ld;
 
/*
g++ t-triangle.cpp -o k
 
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
	
	int n[3];
	int m[3];
	cin >> n[0] >> n[1] >> n[2];
	cin >> m[0] >> m[1] >> m[2];
	set<int> sn(n, n + 3);
	set<int> sm(m, m + 3);
	if(sn != sm) {
		cout << "NO" << endl;
		return 0;
	}
	//cout << "here\n";
	//cout << pow(n[0], 2) << endl;
 
	if(pow(n[0], 2) == pow(n[1], 2) + pow(n[2], 2)) {
		cout << "YES" << endl;
		return 0;
	}
	if(pow(n[1], 2) == pow(n[0], 2) + pow(n[2], 2)) {
		cout << "YES" << endl;
		return 0;
	}
	if(pow(n[2], 2) == pow(n[0], 2) + pow(n[1], 2)) {
		cout << "YES" << endl;
		return 0;
	}
 
	cout << "NO" << endl;
    	return 0;
}