#include<iostream>
using namespace std;
class Shop{
    int id;
    int price;
    public:
    void setData(int a ,int b){
        id =a;
        price=b;
    }
    void getData(){
        cout<<"code of this item is :->"<<id<<endl;
        cout<<"Price of this item is:-> "<<price<<endl;
    }
};
int main(){

    int size=3,p,q;
    Shop *ptr=new Shop[size];
    Shop *ptrTemp=ptr;
    for(int i=0;i<size;i++){
        cout<<"Id and price of item:->"<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for(int j=0;j<size;j++){
        cout<<"Item number:->"<<j+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    // int *ptr=&size;
    return 0;
}