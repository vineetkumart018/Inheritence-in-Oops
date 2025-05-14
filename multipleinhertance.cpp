#include<iostream>
using namespace std; 
class cricketer{
    public:
    int runs;
    int wickets;
    int average;

};
class engineer{
    public:
    int experience;
    string domains;

};
class phodu:public engineer,public cricketer{//multiple inheritence
    public:
    string name;

};
int main(){
    phodu person1;
    person1.runs=1000;
    person1.wickets=50;
    person1.average=43;
    person1.experience=5;
    person1.domains="Web developer";

    return 0;
}