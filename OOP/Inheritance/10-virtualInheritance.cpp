#include <iostream>
using namespace std;


/*Virtual Inheritance
->Subset of Hybrid inheritance
->Used when a diamond problem is caused during hybrid inheritance
->It is done by placing virtual keyword after inherited class name which
  causes the diamond problem
*/
class A{
    public:
    A()
    {
        cout<<"A::A() called"<<endl;
    }

};
class B:virtual public A{
    public:
    B():A(){
        cout<<"B::B() called"<<endl;
    }
};
class C:virtual public A{
    public:
    C():A(){
        cout<<"C::C() called"<<endl;
    }
};
class D:public B,public C{
    public:
    D():B(),C(){
        cout<<"D::D() called"<<endl;
    }
};

class animal{
  protected:
  std::string name;
  int age;
  public:
  animal():name(""),age(0){}
  animal(std::string n,int a):name(n),age(a){}
};
class lion:virtual public animal{
  protected:
  int teeth;
  public:
  lion():teeth(0),animal(){}
  lion(int t,std::string n,int a):teeth(t),animal(n,a){}
  void getdata(int t){
    teeth=t;
  }
  void putdata(){
    cout<<teeth<<endl;
  }
};
class eagle:virtual public animal{
  protected:
  int wings;
  int head;
  public:
  eagle():wings(0),head(),animal(){}
  eagle(int w,int h,std::string n,int a):wings(w),head(h),animal(n,a){}
  void getdata(int w,int h){
    wings=w;
    head=h;
  }
  void putdata(){
    cout<<wings<<endl;
    cout<<head<<endl;
  }
};
class griffin:public lion,public eagle{
  public:
  griffin():lion(),eagle(){}
  griffin(std::string n,int a,int t,int w,int h):lion(t,n,a),eagle(w,h,n,a),animal(n,a){}
  void putdata(){
    lion::putdata();
    eagle::putdata();
  }
};



int main()
{
    D d1; //Only one copy of A is in D
    //Virtual keyword only calls default constructor
    griffin g;
    g.putdata();

}