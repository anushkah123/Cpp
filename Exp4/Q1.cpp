#include <iostream>
using namespace std;

class Number {
    int value;  // private member variable

public:
    // Function to take input from user
    void getValue() {
        cout << "Enter value: ";
        cin >> value;
    }

    // Function to display value
    void display() {
        cout << value << endl;
    }

    // Member function to swap values of two objects
    void swapValues(Number &obj) {
        int temp = value;
        value = obj.value;
        obj.value = temp;
    }
};

int main() {
    Number n1, n2;

    cout << "Enter value for first object:" << endl;
    n1.getValue();

    cout << "Enter value for second object:" << endl;
    n2.getValue();

    cout << "\nBefore swapping:" << endl;
    cout << "n1 = "; n1.display();
    cout << "n2 = "; n2.display();

    // Swap values using member function
    n1.swapValues(n2);

    cout << "\nAfter swapping:" << endl;
    cout << "n1 = "; n1.display();
    cout << "n2 = "; n2.display();

    return 0;
}
