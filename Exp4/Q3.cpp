#include <iostream>
using namespace std;
class Class2;
class Class1{
    private:
    int num1;
    
    public:
    void accept(){
    cout<<"Enter first number:";
    cin>>num1;
    }
    void display(){
        cout<<"Class1 Value "<<num1<<endl;
    }
    
friend void swapnumbers(Class1 &a,Class2 &b);
};
class Class2{
    private:
    int num2;
    
    public:
    void accept(){
    cout<<"Enter second number:";
    cin>>num2;
    }
    void display(){
        cout<<"Class2 Value:"<<num2<<endl;
    }
    
friend void swapnumbers(Class1 &a,Class2 &b);
};
void swapnumbers(Class1 &a,Class2 &b){
 int temp = a.num1;
 a.num1 = b.num2;
 b.num2 = temp;
}

int main(){
    Class1 A;
    Class2 B;
    
    A.accept();
    B.accept();
     cout << "\n Before swap:\n";
     A.display();
     B.display();
     
     swapnumbers(A,B);
     cout << "\n After swap:\n";
     A.display();
     B.display();
     
     return 0;
     
     
}
