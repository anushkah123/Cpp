
#include <iostream>
using namespace std;
class addstring {
public:
    string str;
    addstring (string s) {
        str = s;
    }
    addstring operator + (addstring obj) {
        return addstring (str + obj.str);
    }
    void display() {
        cout << str << endl;
    }
};
int main() {
    addstring S1 ("XYZ");
    addstring S2 ("PQR");
    addstring S3 = S1 + S2;
    cout << "concatenated string: " << S3.str << endl;
    return 0;
}

#include <iostream>
#include <string.h>
using namespace std;

class String1 {
private:
    char str[100];
public:
    void accept() {
        cout << "Enter a string: ";
        cin >> str;
    }

    void display() {
        cout << "Concatenated string: " << str << endl;
    }

    void operator+(String1 &s1) {
        strcat(str, s1.str);
    }
};

int main() {
    String1 s1, s2;
    s1.accept();
    s2.accept();
    s1 + s2;
    s1.display();
    return 0;
}
