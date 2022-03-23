#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int pstudentID, const char pname[]) 
{
  studentID=pstudentID;
  strcpy(name,pname);
}

// Display StudentId and Name
void Student::display() 
{

  cout<<"----------------------------"<<endl;
  cout<<"student name"<<name<<endl;
  cout<<"student ID"<<studentID<<endl;
  cout<<"-----------------------"<<endl;
  
}
