#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    double x, y, r; cin >> x >> y >> r;         // circle
    double tx, ty, s; cin >> tx >> ty >> s;     // square
    double first, second;
    int status = 0;
    if (sqrt(pow(tx-x,2)+pow(ty-y,2)) < r) {
        status = 2;
    }
    else if (sqrt(pow(tx-x+s,2)+pow(ty-y,2)) < r) {
        status = 2;
    }
    else if (sqrt(pow(tx-x,2)+pow(ty-y+s,2)) < r) {
        status = 2;
    }
    else if (sqrt(pow(tx-x+s,2)+pow(ty-y+s,2)) < r) {
        status = 2;
    }

    // i give up lmao
    if (status != 2){
        if (2*pow(y,2)-4*(pow(tx+x,2)-r) >= 0) {
            first = (-2*y+2*pow(y,2)-4*(pow(tx+x,2)-r))/2;
            second = (-2*y-2*pow(y,2)-4*(pow(tx+x,2)-r))/2;
            if (first >= ty && first <= ty+s && second >= ty && second <= ty+s) 
                status = 2;
            else if (first >= ty && first <= ty+s)
                status = 1;
            else if (second >= ty && second <= ty+s)
                status = 1;
        }
        if (2*pow(y,2)-4*(pow(tx+x,2)-r) >= 0) {
            first = (-2*y+2*pow(y,2)-4*(pow(tx+x,2)-r))/2;
            second = (-2*y-2*pow(y,2)-4*(pow(tx+x,2)-r))/2;
            if (first >= ty && first <= ty+s && second >= ty && second <= ty+s) 
                status = 2;
            else if (first >= ty && first <= ty+s)
                status = 1;
            else if (second >= ty && second <= ty+s)
                status = 1;
        }
        if (2*pow(y,2)-4*(pow(tx+x,2)-r) >= 0) {
            first = (-2*y+2*pow(y,2)-4*(pow(tx+x,2)-r))/2;
            second = (-2*y-2*pow(y,2)-4*(pow(tx+x,2)-r))/2;
            if (first >= ty && first <= ty+s && second >= ty && second <= ty+s) 
                status = 2;
            else if (first >= ty && first <= ty+s)
                status = 1;
            else if (second >= ty && second <= ty+s)
                status = 1;
        }
        if (2*pow(y,2)-4*(pow(tx+x,2)-r) >= 0) {
            first = (-2*y+2*pow(y,2)-4*(pow(tx+x,2)-r))/2;
            second = (-2*y-2*pow(y,2)-4*(pow(tx+x,2)-r))/2;
            if (first >= ty && first <= ty+s && second >= ty && second <= ty+s) 
                status = 2;
            else if (first >= ty && first <= ty+s)
                status = 1;
            else if (second >= ty && second <= ty+s)
                status = 1;
        }
    }
    cout << status;
    
    return 0;
}