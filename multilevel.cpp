#include<iostream>
using namespace std;
class Student {
    protected:
    int roll_number;
    public:
    void setrollnumber(int);
    void getrollnumber(void);
};
class Exam:public Student{
    protected:
    float maths;
    float physics;
    public:
    void setmarks(float,float);
    void getmarks(void);
};
void Exam::setmarks(float m,float p){
    maths=m;
    physics=p;
}
void Exam::getmarks(void){
    cout<<"The marks obtained in maths are :"<<maths<<endl;
    cout<<"The marks obtained in physics are:"<<physics<<endl;
}
void Student::setrollnumber(int r){
    roll_number=r;
}
void Student::getrollnumber(void){
    cout<<"The roll number is "<<roll_number<<endl;
}
class Result:public Exam{

    float perchange;
    public:
    void Resultdisplay();
};
void Result::Resultdisplay(){
    getrollnumber();
    getmarks();
    cout<<"your perchange is"<<(maths+physics)/2<<"%"<<endl;
}
int main(){
    
    Result vineet;
    vineet.setrollnumber(420);
    vineet.setmarks(94.99,96.99);
    vineet.Resultdisplay();


    return 0;
}