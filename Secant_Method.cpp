#include <iostream>
#include <cmath>
using namespace std;

float f(float x) {
return pow(x, 3) - x - 11;
}

void secant(float x1, float x2, float E) {
float x0;
int n = 0;

cout << "\nIteration\tx0\t\tx1\t\tx2\t\tf(x2)\n";
cout << "----------------------------------------------------------\n";

do {
x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
cout << n + 1 << "\t\t" << x0 << "\t" << x1 << "\t" << x2 << "\t" << f(x2) << endl;

x1 = x2;
x2 = x0;
n++;

} while (fabs(f(x0)) >= E);

cout << "\nRoot of the given equation: " << x0 << endl;
cout << "Number of iterations: " << n << endl;
}

int main() {
cout << "Name: Tamima Zahan Bohni" << endl;
cout << "ID No: 1425"<<endl;
float x1, x2, E;
cout << "\nEnter first guess (x1): ";
cin >> x1;
cout << "Enter second guess (x2): ";
cin >> x2;
cout << "Enter tolerance (E): ";
cin >> E;

if (f(x1) * f(x2) > 0) {
cout << "Cannot find a root in the given interval.\n";
} else {
secant(x1, x2, E);
}
return 0;
}
