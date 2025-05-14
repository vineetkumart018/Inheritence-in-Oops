#include<iostream>
using namespace std;
class vehicle{//parent class
    public:
    int top_speed;
    float mileage;
    string fuel;
    private:
    int bootspace;
};
class twowheeler:public vehicle{//derived class
    public:
    

};
class fourwheeler:public vehicle{//derived class
    public:
    

};
class scooty:public twowheeler{
    public:

};
class bike:public twowheeler{
    public:

};

int main(){
    bike b1;
    return 0;
}
