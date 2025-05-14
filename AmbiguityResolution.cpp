#include<iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"How are you?"<<endl;
    }

};
class Base2{
    public:
    void greet(){
        cout<<"Kaise hoo?"<<endl;
    }

};
class derived:public Base1,public Base2{
    int a;
    public:
    
    void greet(){
        cout<<"I am fine"<<endl;
        Base1::greet();
    }
};
class Base{
    public:
    void say(){
        cout<<"Hello world!"<<endl;
    }
};
class D:public Base{
    int a;
    //D's new say() method will overide base class's say()method
    public:
    void say(){
        cout<<"Hello everyone!"<<endl;
    }

};
int main(){
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived d;
    d.greet();
    
    // Base b;
    // b.say();
    // D d;
    // d.say();
    
    
    

    return 0;
}