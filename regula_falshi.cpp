#include <iostream>
#include <cmath>
using namespace std;

#define MAX_ITER 1000000

double func(double x) {
return x * x * x - x - 11;
}

void regulaFalsi(double a, double b) {
if (func(a) * func(b) >= 0) {
cout << "Invalid assumption: f(a) and f(b) should have opposite signs.\n";
return;
}

double c = a;
cout << "Iteration Table:\n";
cout << "a\tb\tf(a)\tf(b)\tc\tf(c)\n";

for (int i = 0; i < MAX_ITER; i++) {
c = (a * func(b) - b * func(a)) / (func(b) - func(a));
cout << a << "\t" << b << "\t" << func(a) << "\t" << func(b) << "\t" << c << "\t" << func(c) << endl;

if (fabs(func(c)) < 0.001)
break;

if (func(c) * func(a) < 0)
b = c;
else
a = c;
}

cout << "\nThe value of the root is: " << c << endl;
}

int main() {
cout << "Name: Tamima Zahan Bohni" << endl;
cout << "ID No: 1425"<<endl;
double a, b;
cout << "\nEnter the first guess (a): ";
cin >> a;
cout << "Enter the second guess (b): ";
cin >> b;

regulaFalsi(a, b);

return 0;
}
