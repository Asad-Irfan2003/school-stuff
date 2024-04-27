#include <iostream>
using namespace std;

/*Friend Class
When a class is declared friend it can access all private and protected attributes and methods of that class
*/

/*Class B is a friend of class A*/
class B; //Forward declaration

class A{
    private:
    int num;
    public:
    A():num(100){}
    friend class B;
    int operator +(const A &obj){
         return num+obj.num;
    }
    friend ostream& operator<<(ostream &output,const A &a){
        output<<a.num<<endl;
        return output;
    }
};

class B{
    public:
    int add(A a1,A a2){
        return a1.num+a2.num;
    }
};
class square;
class rectangle{
    int width,height;
    public:
    rectangle(int w,int h){
        width=w; height=h;

    }
    void display(){
        cout<<"Rectangle: "<<width*height<<endl;
    }
    void morph(square &);
};
  class square{
    int side;
    public:
    square(int s){
        side=s;
    }
    void display(){
        cout<<"Square: "<<side*side<<endl;
    }
    friend class rectangle;
  };
   void rectangle::morph(square &s){
    width=s.side;
    height=s.side;
   }
     
int main(){
    B b;
    A a1;
    A a2;
    int sum=b.add(a1,a2);
    cout<<sum<<endl;
}



