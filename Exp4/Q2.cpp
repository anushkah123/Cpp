#include <iostream>

using namespace std;

class Number {
private:
    int n1, n2;

public:
    void accept() {
        cout << "Enter two numbers: ";
        cin >> n1 >> n2;
    }

    void disp() {
        cout << "n1 = " << n1 << ", n2 = " << n2 << endl;
    }

    friend void swap(Number &n);
};

void swap(Number &n) {
    int temp = n.n1;
    n.n1 = n.n2;
    n.n2 = temp;
}

int main() {
    Number m;

    m.accept();
    cout << "Before swap: ";
    m.disp();

    swap(m);

    cout << "After swap: ";
    m.disp();

    return 0;
}
