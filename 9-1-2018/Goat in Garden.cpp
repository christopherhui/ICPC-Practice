#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14159265358979323846264338;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double a, b, c, r;
    cin >> a >> b >> c >> r;
    // Huron's formula to compute area of triangle
    double s = (a + b + c) / 2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    // Takes the side length * radius to find empty space and subtract the circle parts
    double A = acos((pow(b, 2) + pow(c, 2) - pow(a, 2))/(2 * b * c))/2;
    double side1 = ((r/tan(A)) * r) - (((pi-2*A)/2)*pow(r,2));

    double B = acos((pow(a, 2) + pow(c, 2) - pow(b, 2))/(2 * a * c))/2;
    double side2 = ((r/tan(B)) * r) - (((pi-2*B)/2)*pow(r,2));

    double C = acos((pow(a, 2) + pow(b, 2) - pow(c, 2))/(2 * a * b))/2;
    double side3 = ((r/tan(C)) * r) - (((pi-2*C)/2)*pow(r,2));

    cout << setprecision(15) << 1- (side1+side2+side3)/area;

    return 0;
}
