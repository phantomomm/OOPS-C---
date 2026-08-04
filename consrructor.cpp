#include<bits/stdc++.h>
using namespace std;
class Student{  // Class is student here,its used to define or create a new data structure
public:
   string name;
   int rno;
   float gpa;

   Student(){   // Default constructor (gets executed when a object is initialsed in general way)
             
   }

   Student(string s,int r,float g){
       name = s;
       rno = r;
       gpa = g;   // Parameterised constructor is just a function with no return type.
   }

   Student(string s,int r){  
    name = s;
    rno = r;      //Multiple contructors too can be created, while changing number of arguments.
   }
};
  
void print(Student s)
{
   cout << s.gpa << " " <<s.rno << " " << s.name;
}

void change(Student& s){
     s.name = "Pat";        // & used to pass by reference , alters the actual object                       
                            // pass by value doesnt alter , generalises the function.
}

int main()
{
   Student s1("omm",29,7.2);

   Student s2;
   s2.name = "dev";
   s2.rno = 45;
   s2.gpa = 8.9;  // if a constructor is alr created then this wont get executed unless the default is created specifically

   Student s3("Alex",37);
   s3.gpa = 7.9;

   Student s4 = s1;
   s4.name = "Pratik"; //Deep copy , gets overwritten in such case

   Student s5(s1);
   s5.name = "Patrick"; //Deep copy
   
   print(s1);
}