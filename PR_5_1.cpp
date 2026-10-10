#include <iostream>
#include <cmath>
using namespace std;

// Допоміжна функція h(x, y) = (y^2 - sqrt(x^2 + y^2)) / (1 + x^2 * y^2)
double h(const double x, const double y); // прототип

int main()
{
    double p, q;
    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    double d = fabs(p - q);                 // |p - q|
    double t = h(d, sqrt(d));               // h(|p - q|, sqrt|p - q|)
    double c = t * t + h(1, q * q - p * p); // h^2(...) + h(1, q^2 - p^2)

    cout << "c = " << c << endl;
    return 0;
}

double h(const double x, const double y) // визначення
{
    return (y * y - sqrt(x * x + y * y)) / (1 + x * x * y * y);
}