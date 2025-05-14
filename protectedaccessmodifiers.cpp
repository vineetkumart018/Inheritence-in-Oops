#include <iostream>
using namespaces std;
class Base
{
protected:
    int a;

private:
    int b;
};
/*
for a protected member:
                       Public derivation       Private derivation         Protected derivation
1.Private members      Not inherited             Not inherited            Not inherited    
2.Protected members    protected                 private                  protected
3.Public membeers      Public                    private                  protected
*/
class Derived : protected Base
{
};
int main()
{
    Base b;
    Derived d;
    cout<<d.a;//will not works since a  is protected in both as well as derived class 
    return 0;
}