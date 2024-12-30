#include <iostream>
using namespace std;

// Iterative Fibonacci
int fibIterative(int n) {
    int t0 = 0, t1 = 1, s = 0; // Initialize the first two Fibonacci numbers and a sum variable
    
    if (n <= 1) 
        return n; // Base case for n = 0 or 1
    
    for (int i = 2; i <= n; i++) { // Loop from 2 to n
        s = t0 + t1; // Calculate the next Fibonacci number
        t0 = t1;     // Update t0 to the previous t1
        t1 = s;      // Update t1 to the newly calculated Fibonacci number
    }
    
    return s; // Return the nth Fibonacci number
}

// Recursive Fibonacci
int fibRecursive(int n) {
    if (n <= 1) 
        return n; // Base case for n = 0 or 1
    return fibRecursive(n - 2) + fibRecursive(n - 1); // Recursive relation
}

// Memoized Recursive Fibonacci
int F[10]; // Array to store previously calculated Fibonacci numbers

int fibMemoized(int n) {
    if (n <= 1) {
        F[n] = n; // Base case: Store the Fibonacci number in the array
        return n;
    }
    
    if (F[n - 2] == -1) // Check if F[n-2] has already been calculated
        F[n - 2] = fibMemoized(n - 2); // Calculate and store it if not
    
    if (F[n - 1] == -1) // Check if F[n-1] has already been calculated
        F[n - 1] = fibMemoized(n - 1); // Calculate and store it if not
    
    F[n] = F[n - 2] + F[n - 1]; // Calculate and store F[n]
    return F[n]; // Return the nth Fibonacci number
}

// Main Function
int main() {
    // Initialize the memoization array
    for (int i = 0; i < 10; i++) 
        F[i] = -1; // Set all elements to -1 indicating uncomputed values
    
    // Test the Fibonacci functions
    cout << "Iterative Fibonacci (n=5): " << fibIterative(8) << endl;
    cout << "Recursive Fibonacci (n=5): " << fibRecursive(8) << endl;
    cout << "Memoized Fibonacci (n=5): " << fibMemoized(8) << endl;

    return 0;
}
