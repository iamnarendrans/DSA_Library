#include <iostream> // For input and output operations
#include <stdio.h>  // For printf function
using namespace std; // Using the standard namespace to avoid prefixing std:: before cout, cin, etc.

/**
 * @class DiagonalMatrix
 * @brief Represents a diagonal matrix using a 1D array for efficient storage.
 *
 * This class provides methods to set, get, and display elements of a diagonal matrix.
 * Only the diagonal elements are stored to optimize space.
 *
 * @private
 * - int n: The dimension of the square matrix (number of rows/columns).
 * - int *A: Pointer to the dynamically allocated array storing diagonal elements.
 *
 * @public
 * - DiagonalMatrix(int n): Constructor that initializes the matrix of size n x n.
 * - ~DiagonalMatrix(): Destructor that releases allocated memory.
 * - void Set(int i, int j, int x): Sets the element at position (i, j) if it is on the diagonal.
 * - int Get(int i, int j): Retrieves the element at position (i, j).
 * - void Display(): Displays the matrix in a 2D format.
 * - int GetDimension(): Returns the dimension of the matrix.
 */
class DiagonalMatrix
{
    private:
        int n;
        int *A;
    public:
        DiagonalMatrix(int n)
        {
            this->n = n;
            A = new int[n];
        }
        ~DiagonalMatrix()
        {
            delete []A;
        }
        void Set(int i, int j, int x);
        int Get(int i, int j);
        void Display();
        int GetDimension() { return n; }
};

void DiagonalMatrix::Set(int i, int j, int x)
{
    if (i == j)
        A[i-1] = x;
}

int DiagonalMatrix::Get(int i, int j)
{
    if (i == j)
        return A[i-1];
    return 0;
}

void DiagonalMatrix::Display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                cout << A[i-1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    int d;
    cout << "Enter Dimensions: ";
    cin >> d;

    DiagonalMatrix dm(d);

    int x;
    cout << "Enter All Elements: " << endl;
    for(int i = 1; i <= d; i++)
    {
        for(int j = 1; j <= d; j++)
        {
            cin >> x;
            dm.Set(i, j, x);
        }
    }

    dm.Display();

    return 0;
}