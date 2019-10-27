#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {

  ifstream file;
  file.open("coffee.in");
  
  int n; file >> n; 
  map<string, int> m = {{"small", 0}, {"medium", 1}, {"large", 2}};

  while (n--) {
    int c, p; file >> c >> p;
    map<string, vector<int>> coffeeTypes;
    int deliveryCost = 100/p;
    for (int i = 0; i < c; i++) {
        string s; file >> s;
        vector<int> v(3);
        file >> v[0] >> v[1] >> v[2];
        coffeeTypes[s] = v;
    } 
    
    for (int i = 0; i < p; i++) {
        string name; file >> name;
        string size; file >> size;
        string coffee; file >> coffee;
        int cost = 0;
        cost += coffeeTypes[coffee][m[size]];
        cost += deliveryCost;
        if (cost % 10 == 1) cost -= 1; 
        if (cost % 10 == 4) cost += 1;
        if (cost % 10 == 6) cost -= 1;
        if (cost % 10 == 9) cost += 1;
        cout << name << ' ' << cost << endl;
    }
  }

  return 0;
} 