#include<iostream>
using namespace std;
class Employee{
    protected:
    string name;

};
class Managers:public Employee{

};
class Developer:public Employee{

};
class Intern:public Employee{

};
int main(){
    return 0;
}
