/*
Question: Write a C++ program that uses classes and objects to manage the grades of students in
different subjects. Your program should have the following classes:
Student: A class that represents a student. It should have the following attributes: name, age, and a list
of grades (one for each subject).
Subject: A class that represents a subject. It should have the following attributes: name, teacher, and a
list of students who are taking the subject.
School: A class that represents the school. It should have the following attributes: a list of subjects
offered by the school and a list of students enrolled in the school.
Your program should be able to do the following:
 Create a subject object with a name and a teacher.
 Add a student object to a subject&#39;s list of students.
 Create a student object with a name, age, and a list of grades.
 Add a student object to the school&#39;s list of students.
 Get the average grade of a student in a particular subject.
 Get the average grade of a student across all subjects.
 Get the average grade of all students in a particular subject.
 Get the average grade of all students across all subjects.
 Print the list of students enrolled in a particular subject.
 Print the list of subjects offered by the school.

*/
#include <iostream>
#include<vector>

using namespace std;
class Student{
    string name;
    int age;
    vector<float>grades;
    public:
    Student():name(""),age(10){

    }
    Student(string n,int a):name(n),age(a){

    }
    void addgrade(float g){
        grades.push_back(g);
    }
    void printgrades(){
        for(int i=0;i<grades.size();i++)
        {
            cout<<grades[i]<<endl;
        }
    }

};
class Subject{
    string name;
    string teacher;
    vector<Student> student;
    public:
    Subject():name(""),teacher(""){

    }
    Subject(string n,string t):name(n),teacher(t){
   
    }
};
class School{
  vector<Subject>subject;
  vector<Student>student;
  public:
  void addstudent(Student s){
     student.push_back(s);
  }
};
int main(){
    Subject s("physics","Asad");
    Student st("Zoha",20);
    School skl;
    skl.addstudent(st);

}