#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) { 
        value = v; //parameterized 
    }

    // Pre-increment: ++x
    void operator++() {
        value++;        // actual operation
    }

    // Post-increment: x++
    void operator++(int) {
        value++;        // actual operation
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number n(5);

    cout << "Original value: ";
    n.display();

    ++n;   // pre-increment
    cout << "After pre-increment (++n): ";
    n.display();

    n++;   // post-increment
    cout << "After post-increment (n++): ";
    n.display();

    return 0;
}
