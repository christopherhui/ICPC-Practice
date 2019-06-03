#include<bits/stdc++.h>
using namespace std;

int main() {
	ifstream file;
	file.open("hello.in");
	int t;
	vector<int> d(12);

	file>>t;
	for(int i=0;i<t;i++){
		for(int j=0;j<12;j++){
			file>>d[j];
		}

		if(!(d[0]<d[1]&&d[1]<d[2]&&d[2]<d[3]&&d[3]<d[4])){
			cout<<"no"<<endl;
      d.clear();
			continue;
		}

		bool output = false;
		int m = max(max(d[0], d[1]), max(d[2], d[3]));
		for(int k =4; k<12;k++){
			if(d[k] < m){
				cout<<"no"<<endl;
				output = true;
        d.clear();
				break;
			}
		}
		if(output){
			continue;
		}
		cout<<"yes"<<endl;
    d.clear();
	}
	return 0;
}