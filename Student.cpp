#include "Student.h"
#include <iostream>


using namespace std;

// Assign studentId and name

 void Student::display(){

          cout<<"student ID:"<<studentId<<endl;
          cout<<"name:"<<name;
          
  }

 void Student::assignDetails(int stid,char name1[]){

        studentId=stid;
        strcpy(name,name1);
          
        
}
