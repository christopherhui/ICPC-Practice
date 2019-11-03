#include <bits/stdc++.h>
#include<string>
#include<set>
#include<cmath>
#include<unordered_set>
 
using namespace std;
typedef long long ll;
typedef long double ld;
 
void reblur(int **c1, int **c2, int w, int h) {
	
	return;
}
 
/*
g++ u-blur.cpp -o k
 
*/
int main() {
   	ios::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	
	int w, h;
	int b;
	cin >> w >> h >> b;
	bool s = true;
	int a1[h][w];
	int a2[h][w];
	int (*c1)[h][w];
	int (*c2)[h][w];
	
	for(int i = 0; i < h; i++)
		for(int j = 0; j < w; j++) {
			cin >> a1[i][j];
		}
	
	for(int k = 1; k <= b; k++) {
		if(s) {
			c1 = &a1; c2 = &a2;
		} else {
			c1 = &a2; c2 = &a1;
		}
 
	// -------
	for(int i = 0; i < h; i++)
		for(int j = 0; j < w; j++) {
			(*c2)[i][j] = 0;
			for(int ih = i - 1; ih <= i + 1; ih++)
				for(int jw = j - 1; jw <= j + 1; jw++) {
					//cout << "debug" << endl;
					//cout << (ih + h) % h << " " << (iw + w) % w << endl;
					(*c2)[i][j] += (*c1)[(ih + h) % h][(jw + w) % w];
				}
		}
	// -------
 
		s = !s;
	}
 
	if(b == 0) {
		c2 = &a1;
	}
	//cout << endl;
	unordered_set<int> d;
	for(int i = 0; i < h; i++) {
		for(int j = 0; j < w; j++) {
			//cout << (*c2)[i][j] << " ";
			d.insert((*c2)[i][j]);
		}
		//cout << endl;
	}
	cout << d.size() << endl;
 
    	return 0;
}