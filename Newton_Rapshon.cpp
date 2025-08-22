#include <iostream>
#include <cmath>
using namespace std;

#define EPSILON 0.0001

double func(double x) {
return x * x * x - x - 11;
}
double derivFunc(double x) {
return 3 * x * x - 1; // Correct derivative of x^3 - x - 11
}

void newtonRaphson(double x) {
double h = func(x) / derivFunc(x);
while (fabs(h) >= EPSILON) {
h = func(x) / derivFunc(x);
x = x - h;
}
cout << "The value of the root (Newton-Raphson) is: " << x << endl;
}

int main() {
cout << "Name: Tamima Zahan Bohni" << endl;
cout << "ID No: 1425"<<endl;
double x0;
cout << "\nEnter initial guess: ";
cin >> x0;

newtonRaphson(x0);

return 0;
}
