#include<iostream>
using namespace std;
class student{
    protected:
    int rollno;
    public:
    void setnumber(int a){
        rollno=a;
    }
    void printnumber(void){
        cout<<"Your roll no is "<<rollno<<endl;
    }

};
class test:virtual public student{
    protected:
    float maths, physics;
    public:
    void setmarks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void printmarks(void){
        cout<<"You result is here:"<<endl
            <<"Maths:"<<maths<<endl
            <<"Physics :"<<physics<<endl;
    }
};
class sports:virtual public student{
    protected:
    float score;

    public:
    void setscore(float sc){
        score=sc;
    }
    void printscore(void){
        cout<<"You PT score is:"<<score<<endl;
    }

};
class result:public test, public sports{
    private:
    float total;
    public:
    void display(void){
        total=maths+physics+score;
        printnumber();
        printmarks();
        printscore();
        cout<<"Your total score is "<<total<<endl;
    }

};
int main(){
    result vineet;
    vineet.setnumber(84);
    vineet.setmarks(78.98,45.67);
    vineet.setscore(9);
    vineet.display();


    return 0;
}