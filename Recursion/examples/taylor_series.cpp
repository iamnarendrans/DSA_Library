#include <iostream>
using namespace std;

// Taylor Series using Static Variables
double taylorStatic(int x, int n) {
    static double p = 1, f = 1; // Static variables for power and factorial
    double r;

    if (n == 0)
        return 1;

    r = taylorStatic(x, n - 1);
    p *= x;
    f *= n;

    return r + (p / f);
}

// Taylor Series using Horner's Rule
double taylorHorner(int x, int n) {
    static double s = 1; // Static variable for summation
    if (n == 0)
        return s;

    s = 1 + (x * s / n);
    return taylorHorner(x, n - 1);
}

// Taylor Series using Iterative Method
double taylorIterative(int x, int n) {
    double s = 1; // Summation starts at 1
    double num = 1; // Power of x
    double den = 1; // Factorial

    for (int i = 1; i <= n; i++) {
        num *= x;
        den *= i;
        s += num / den;
    }

    return s;
}

// Separate functions to call and display results for each method
void displayStatic(int x, int n) {
    cout << "Taylor Series (Static Variables): " << taylorStatic(x, n) << endl;
}

void displayHorner(int x, int n) {
    cout << "Taylor Series (Horner's Rule): " << taylorHorner(x, n) << endl;
}

void displayIterative(int x, int n) {
    cout << "Taylor Series (Iterative): " << taylorIterative(x, n) << endl;
}

int main() {
    int x = 4;  // Exponent value
    int n = 15; // Number of terms

    // Call and display results for each method
    displayStatic(x, n);
    displayHorner(x, n);
    displayIterative(x, n);

    return 0;
}

