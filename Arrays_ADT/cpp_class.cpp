#include <iostream>
using namespace std;

template <class T>
class Array {
private:
    T* A;
    int size;
    int length;

public:
    // Default constructor
    Array() {
        size = 10;
        A = new T[size];
        length = 0;
    }

    // Parameterized constructor
    Array(int sz) {
        size = sz;
        length = 0;
        A = new T[size];
    }

    // Destructor
    ~Array() {
        delete[] A;
    }

    // Member functions
    void Display();
    void Insert(int index, T x);
    T Delete(int index);
};

// Function to display the array
template <class T>
void Array<T>::Display() {
    for (int i = 0; i < length; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at a specified index
template <class T>
void Array<T>::Insert(int index, T x) {
    if (index >= 0 && index <= length) {
        for (int i = length - 1; i >= index; i--) {
            A[i + 1] = A[i];
        }
        A[index] = x;
        length++;
    }
}

// Function to delete an element at a specified index
template <class T>
T Array<T>::Delete(int index) {
    T x = 0;
    if (index >= 0 && index < length) {
        x = A[index];
        for (int i = index; i < length - 1; i++) {
            A[i] = A[i + 1];
        }
        length--;
    }
    return x;
}

int main() {
    // Create an array of type 'char'
    Array<char> arr(10);
    arr.Insert(0, 'a');
    arr.Insert(1, 'c');
    arr.Insert(2, 'd');
    
    // Display the array
    arr.Display();

    // Delete an element and display again
    cout << arr.Delete(0) << endl;
    arr.Display();

    return 0;
}
