#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main ()
{
  string student1_name;
  string student2_name;
  double student1_test1;
  double student1_test2;
  double student1_test3;
  double student2_test1;
  double student2_test2;
  double student2_test3;

  ifstream InputFile;
  ofstream OutputFile;

  InputFile.open("student_grades.txt");

  if(!InputFile)
  {
    cout<<"Error: the path or files does not exist"<<endl;
    exit(1);
  }

  InputFile >> student1_name;
  InputFile >> student1_test1 >> student1_test2 >> student1_test3;

  InputFile >> student2_name;
  InputFile >> student2_test1 >> student2_test2 >> student2_test3;
  
InputFile.close();
  
  Aver_student1 = (student1_test1 + student1_test2 + student1_test3)/3;
  Aver_student2 = (student2_test1 + student2_test2 + student2_test3)/3;

  OutputFile.open("Final_grade.txt")
  OutputFile >> student1_name >>" Final Grade: " << Aver_student1;
  OutputFile >> student2_name >>" Final Grade: " << Aver_student2;  

  OutputFile.close();
}
