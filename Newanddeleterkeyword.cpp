#include<iostream>
using namespace std;
int main(){
    //Basic Example
    int a=4;
    int* ptr =&a;
    cout<<"The value of a is:"<<*(ptr)<<endl;
    //new keyword
    int *p = new int(40);
    cout<<"The value at address p is:->"<<*(p)<<endl;
    int *arr=new int[4];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    
    for(int i=0;i<4;i++){
        delete[] arr;
        cout<<"The value of index"<<i+1<<":->"<<arr[i]<<endl;
    }
    //Delete keyword
    

    return 0;
}