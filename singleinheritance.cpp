#include<iostream>
using namespace std;
class scooty{//parent class
    public:
    int top_speed;
    float mileage;
    private:
    int bootspace;
};
class bike:public scooty{//derived class
    public:
    int gears;

};
int main(){
    bike b1;
    b1.top_speed=120;
    b1.mileage=45.5;
    b1.gears=5;
    // b1.bootspace=20;//this will give an error as bootspace is private in parent class
    cout<<"Top Speed: "<<b1.top_speed<<endl;
    cout<<"Mileage: "<<b1.mileage<<endl;
    cout<<"Gears: "<<b1.gears<<endl;
    return 0;

}