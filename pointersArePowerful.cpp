#include <iostream>

using namespace std;

int main() {
    // Pointer Basics
    int a = 10;
    int* p = &a;

    cout << "Address stored in pointer p: " << p << endl;
    cout << "Value of a using pointer p: " << *p << endl;

    // Changing the value of a using pointer
    *p = 20;
    cout << "New value of a: " << a << endl;

    // Pointer Arithmetic
    int arr[] = {10, 20, 30, 40, 50};
    int* arrPtr = arr;
    
    cout << "\nAddresses of array elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << " address: " << (arrPtr + i) << endl;
    }

    cout << "\nArray elements using pointer arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << *(arrPtr + i) << endl;
    }

    return 0;
}
