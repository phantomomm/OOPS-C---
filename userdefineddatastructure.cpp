#include<bits/stdc++.h>
using namespace std;
class Student{  // Class is student here,its used to define or create a new data structure
  public:
   double gpa;
   int age;
   string name;
};

void print(Student s)
{
   cout << s.gpa << " " <<s.age << " " << s.name;
}

void change(Student& s){
     s.name = "Pat";        // & used to pass by reference , alters the actual object
                            // pass by value doesnt alter , generalises the function.
}

int main()
{
   Student s1;  // s is the object 
   s.gpa = 7.2;
   s.age = 45;
   s.name = "Omm";

   Student s2;
   s.gpa = 9.0;
   s.age = 34;
   s.name = "Dev";

   Student s3;
   s.gpa = 8.7;
   s.age = 23;
   s.name = "Alex";

   print(s2);
   change(s2);
   print(s2);
}