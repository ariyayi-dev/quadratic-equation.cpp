#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "It is not a quadratic equation:" <<endl;
        return 0 ;
    }
    double delta = b * b -(4 * a * c);
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "it has two real roots:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "it has a double root:" << endl;
        cout << "x = " << x << endl;
    }
    else {
        cout << "the equation has no real roots" << endl;
    }
    return 0;
}
