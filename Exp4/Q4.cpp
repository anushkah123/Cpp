#include <iostream>
using namespace std;
class Result2;
class Result1{
    private:
    float mark1;
    
    public:
    void accept(){
    cout<<"Enter marks for first student:";
    cin>>mark1;
    }
friend float Average( Result1 , Result2 );
};
class Result2{
    private:
    float mark2;
    
    public:
    void accept(){
    cout<<"Enter marks for second student:";
    cin>>mark2;
    }
friend float Average( Result1 , Result2 );
};
float Average( Result1 a, Result2 b){
    float average = (a.mark1 + b.mark2)/2.0;
    return average;
  }
int main(){
    Result1 r1;
    Result2 r2;
    float avg;
    
    r1.accept();
    r2.accept();
    
    avg = Average(r1,r2);
    cout<<"Average of two results is:"<<avg<<endl;
    
return 0;
}
