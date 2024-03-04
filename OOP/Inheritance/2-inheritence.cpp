//is-a relationship: When we need to make a subclass of an existing class
//Example: HR manager is-a employee
//All attributes and characteristics are same for employee and HR manager



//Inheritence
//The capability of a class to derive properties and
//characteristics from another class

//New classes are created from existing classes
//Derived class: Class which is inheriting
//Base class: class from which derived class is inheriting


//Benefits:
//Increases code reliability
//Reduces code redundancy
//Reduces code production code
//Code becomes more readable

//Syntax: class <derived_class_name>:<access_modifier> <base_class_name>
#include<iostream>
using namespace std;
class vehicle{
   public:
   void fuelamount(){

   }
   void capacity(){

   }
   void applybrakes(){

   }
};
class bus:public vehicle{
     
};
class car:public vehicle{

};
class truck:public vehicle{ 
};

int main(){}


