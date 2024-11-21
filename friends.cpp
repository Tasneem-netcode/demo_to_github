#include <iostream>
using namespace std;

class Complex
{
private:
    int a,b ;

public:
   void setNumber(int n1 , int n2){
    a= n1;
    b= n2;
   }

   friend Complex sumComplex(Complex o1, Complex o2);//likhit permission now sumcomplex can acces private members of class complex
   void printNumber(){
    cout<<"Your number is "<<a <<"+i"<<b<<endl;
   }
};

Complex sumComplex(Complex o1 , Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    Complex c1 ,c2  ,sum;
    c1.setNumber(3,6);
    c2.setNumber(6,8);

    c1.printNumber();
    c2.printNumber();
    
    sum =sumComplex(c1 , c2);
    sum.printNumber();
   return 0;
}