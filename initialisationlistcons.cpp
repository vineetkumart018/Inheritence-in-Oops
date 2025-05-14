#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor(argument-list):initialization-section{
assignment+other code;
class Test{
int a;
int b;
public:
Test(int i,int j):a(i),b(j){{
constructor(body);
}


*/
class Test
{
    int a;
    int b;

public:
    Test(int i, int j) :b(j),a(i+b)//This will create problem because a will be initialised first
    {
        cout<<"Constructor executed"<<endl;
        cout<<"value of a is"<<a<<endl;
        cout<<"value of b is"<<b<<endl;
    }
};

int main()
{
    Test t(4,6);
    return 0;
}