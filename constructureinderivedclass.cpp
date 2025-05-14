#include<iostream>
using namespace std;
/*
Case 1:
class B:public A{
//Order of execution of constructor first (A) then second (B)
}
Case 2:
class A:public B,public C{
//Order of executionn of constructor first (B)},second(C)and third(A)

Case 3:
}*/
class Base{
    int data;
    public:
    Base(int i){
        data=i;
        cout<<"Base1 Class constructor called:"<<endl;
    }
    void printdataBase1(void){
        cout<<"The value of data is:"<<data<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2=i;
        cout<<"Base2 Class constructor called:"<<endl;
    }
    void printdataBase2(void){
        cout<<"The value of data is:"<<data2<<endl;
    }
};
class Derived: public Base, virtual public Base2{
    int derived1,derived2;
    public:
    Derived(int a, int b, int c, int d):Base2(b),Base(a){
            derived1=c;
            derived2=d;
            cout<<"Derived class consturctor called"<<endl;
    }
    void printdataderived(void){
        cout<<"The value of derived1 is"<<derived1<<endl;
        cout<<"The value of derived2 is"<<derived2<<endl;
    }

};

int main(){
    Derived vineet(1,2,3,4);
    vineet.printdataBase1();

    return 0;

}