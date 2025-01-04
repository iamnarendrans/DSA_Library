#include <iostream>
#include <cstdlib>
using namespace std;

class Array {
public:
    int *A;
    int size;
    int length;

    Array(int sz) {
        size = sz;
        A = new int[size];
        length = 0;
    }

    ~Array() {
        delete[] A;
    }

    void Display() {
        cout << "\nElements are\n";
        for(int i = 0; i < length; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    void Append(int x) {
        if(length < size) {
            A[length++] = x;
        }
    }

    void Insert(int index, int x) {
        if(index >= 0 && index <= length) {
            for(int i = length; i > index; i--) {
                A[i] = A[i - 1];
            }
            A[index] = x;
            length++;
        }
    }

    int Delete(int index) {
        int x = 0;
        if(index >= 0 && index < length) {
            x = A[index];
            for(int i = index; i < length - 1; i++) {
                A[i] = A[i + 1];
            }
            length--;
        }
        return x;
    }

    static void Swap(int &x, int &y) {
        int temp = x;
        x = y;
        y = temp;
    }

    int LinearSearch(int key) {
        for(int i = 0; i < length; i++) {
            if(key == A[i]) {
                Swap(A[i], A[0]);
                return i;
            }
        }
        return -1;
    }

    int BinarySearch(int key) {
        int l = 0, h = length - 1, mid;
        while(l <= h) {
            mid = (l + h) / 2;
            if(key == A[mid]) {
                return mid;
            } else if(key < A[mid]) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return -1;
    }

    static int RBinSearch(int a[], int l, int h, int key) {
        int mid;
        if(l <= h) {
            mid = (l + h) / 2;
            if(key == a[mid]) {
                return mid;
            } else if(key < a[mid]) {
                return RBinSearch(a, l, mid - 1, key);
            } else {
                return RBinSearch(a, mid + 1, h, key);
            }
        }
        return -1;
    }

    int Get(int index) {
        if(index >= 0 && index < length) {
            return A[index];
        }
        return -1;
    }

    void Set(int index, int x) {
        if(index >= 0 && index < length) {
            A[index] = x;
        }
    }

    int Max() {
        int max = A[0];
        for(int i = 1; i < length; i++) {
            if(A[i] > max) {
                max = A[i];
            }
        }
        return max;
    }

    int Min() {
        int min = A[0];
        for(int i = 1; i < length; i++) {
            if(A[i] < min) {
                min = A[i];
            }
        }
        return min;
    }

    int Sum() {
        int s = 0;
        for(int i = 0; i < length; i++) {
            s += A[i];
        }
        return s;
    }

    float Avg() {
        return (float)Sum() / length;
    }

    void Reverse() {
        int *B = new int[length];
        for(int i = length - 1, j = 0; i >= 0; i--, j++) {
            B[j] = A[i];
        }
        for(int i = 0; i < length; i++) {
            A[i] = B[i];
        }
        delete[] B;
    }

    void Reverse2() {
        int i = 0, j = length - 1;
        while(i < j) {
            Swap(A[i], A[j]);
            i++;
            j--;
        }
    }

    void InsertSort(int x) {
        int i = length - 1;
        if(length == size) return;
        while(i >= 0 && A[i] > x) {
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = x;
        length++;
    }

    int IsSorted() {
        for(int i = 0; i < length - 1; i++) {
            if(A[i] > A[i + 1]) {
                return 0;
            }
        }
        return 1;
    }

    void Rearrange() {
        int i = 0, j = length - 1;
        while(i < j) {
            while(A[i] < 0) i++;
            while(A[j] >= 0) j--;
            if(i < j) {
                Swap(A[i], A[j]);
            }
        }
    }

    static Array* Merge(Array *arr1, Array *arr2) {
        int i = 0, j = 0, k = 0;
        Array *arr3 = new Array(arr1->length + arr2->length);

        while(i < arr1->length && j < arr2->length) {
            if(arr1->A[i] < arr2->A[j]) {
                arr3->A[k++] = arr1->A[i++];
            } else {
                arr3->A[k++] = arr2->A[j++];
            }
        }
        while(i < arr1->length) {
            arr3->A[k++] = arr1->A[i++];
        }
        while(j < arr2->length) {
            arr3->A[k++] = arr2->A[j++];
        }
        arr3->length = k;
        return arr3;
    }

    static Array* Union(Array *arr1, Array *arr2) {
        int i = 0, j = 0, k = 0;
        Array *arr3 = new Array(arr1->length + arr2->length);

        while(i < arr1->length && j < arr2->length) {
            if(arr1->A[i] < arr2->A[j]) {
                arr3->A[k++] = arr1->A[i++];
            } else if(arr2->A[j] < arr1->A[i]) {
                arr3->A[k++] = arr2->A[j++];
            } else {
                arr3->A[k++] = arr1->A[i++];
                j++;
            }
        }
        while(i < arr1->length) {
            arr3->A[k++] = arr1->A[i++];
        }
        while(j < arr2->length) {
            arr3->A[k++] = arr2->A[j++];
        }

        arr3->length = k;
        return arr3;
    }

    static Array* Intersection(Array *arr1, Array *arr2) {
        int i = 0, j = 0, k = 0;
        Array *arr3 = new Array(arr1->length < arr2->length ? arr1->length : arr2->length);

        while(i < arr1->length && j < arr2->length) {
            if(arr1->A[i] < arr2->A[j]) {
                i++;
            } else if(arr2->A[j] < arr1->A[i]) {
                j++;
            } else {
                arr3->A[k++] = arr1->A[i++];
                j++;
            }
        }
        arr3->length = k;
        return arr3;
    }

    static Array* Difference(Array *arr1, Array *arr2) {
        int i = 0, j = 0, k = 0;
        Array *arr3 = new Array(arr1->length);

        while(i < arr1->length && j < arr2->length) {
            if(arr1->A[i] < arr2->A[j]) {
                arr3->A[k++] = arr1->A[i++];
            } else if(arr2->A[j] < arr1->A[i]) {
                j++;
            } else {
                i++;
                j++;
            }
        }
        while(i < arr1->length) {
            arr3->A[k++] = arr1->A[i++];
        }

        arr3->length = k;
        return arr3;
    }
};

int main() {
    int ch, x, index;

    cout << "Enter Size of Array: ";
    cin >> ch;

    Array arr1(ch);

    do {
        cout << "\n\nMenu\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Sum\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        
        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch) {
            case 1:
                cout << "Enter an element and index: ";
                cin >> x >> index;
                arr1.Insert(index, x);
                break;
            case 2:
                cout << "Enter index: ";
                cin >> index;
                x = arr1.Delete(index);
                cout << "Deleted Element is " << x << endl;
                break;
            case 3:
                cout << "Enter element to search: ";
                cin >> x;
                index = arr1.LinearSearch(x);
                cout << "Element index: " << index << endl;
                break;
            case 4:
                cout << "Sum is: " << arr1.Sum() << endl;
                break;
            case 5:
                arr1.Display();
                break;
        }
    } while(ch < 6);

    return 0;
}
