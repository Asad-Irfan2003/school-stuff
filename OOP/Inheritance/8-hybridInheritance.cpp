#include <iostream>
using namespace std;

/*
Hybrid Inheritance
Combination of one or more types of inheritance
*/
class student{
    protected: 
    int rno;
    public:
    student():rno(0){}
    student(int r):rno(r){}
    void get_no(int a){
         rno=a;
    }
    void put_no(){
        cout<<rno<<endl;
    }
};
 class test:public student{
     protected:
     float part1;
     float part2;
     public:
     test():part1(0.0),part2(0.0),student(){}
     test(float part1,float part2,int r):part1(part1),part2(part2),student(r){}
     void getmarks(float m,float m2){
        part1=m;
        part2=m2;
     }
     void putmarks(){
        cout<<part1<< " "<<part2<<endl;
     }
 };
 class sports{
    protected:
    float score;
    public:
    sports():score(0.0){}
    sports(float s):score(s){}
    void getscore(float s){
        score=s;
    }
    void putscore(){
        cout<<score<<endl;
    }
 };
 class result:public test,public sports{
    float total;
    public:
    result():total(0.0),test(),sports(){}
    result(float t,int i,float p,float p2,float s):total(t),test(i,p,p2),sports(s){}
    void display(){
        student::put_no();
        test::put_no();
        sports::putscore();
        cout<<"Total marks: "<<total<<endl;
    }
 };

 int main(){
    result r;
 }