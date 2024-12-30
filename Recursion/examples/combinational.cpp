#include <iostream>
using namespace std;

// Function to calculate factorial of a number (Recursive)
int fact(int n) {
    if (n == 0) return 1; // Base case: 0! = 1
    return fact(n - 1) * n; // Recursive relation: n! = n * (n-1)!
}

// Iterative approach to calculate nCr using the factorial function
int nCr(int n, int r) {
    int num, den;
    
    num = fact(n); // Calculate n!
    den = fact(r) * fact(n - r); // Calculate r! and (n-r)!
    
    return num / den; // Return nCr = n! / (r! * (n-r)!)
}

// Recursive approach to calculate nCr using Pascal's Triangle
int NCR(int n, int r) {
    if (n == r || r == 0) 
        return 1; // Base case: nCr = 1 when r = 0 or n = r
    
    // Recursive relation: nCr = (n-1)C(r-1) + (n-1)Cr
    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}

// Main function
int main() {
    int n = 5, r = 3;

    // Using the iterative factorial-based approach
    cout << "nCr using factorial method (n=5, r=3): " << nCr(n, r) << endl;

    // Using the recursive Pascal's Triangle approach
    cout << "nCr using Pascal's Triangle (n=5, r=3): " << NCR(n, r) << endl;

    return 0;
}
