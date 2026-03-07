/*Write a program to:
Ask the user for number of students.
Dynamically allocate an array of Student objects using new.
Each student contains:
rollNo
marks
Display:
All student records
Highest marks
Properly release deallocate memory. */

#include <iostream>
using namespace std;

class Student
{
private:
  int rollno;
  float marks;

public:
  Student() : rollno(0), marks(0)
  {
  }

  void setRecord()
  {
    cout << "Enter the rollno: ";
    cin >> rollno;

    cout << "Enter the marks: ";
    cin >> marks;
  }

  int getRoll()
  {
    return this->rollno;
  }

  float getMarks()
  {
    return this->marks;
  }

  void displayRecord() const
  {
    cout << "Roll no : " << this->rollno << endl;
    cout << "Marks   : " << this->marks << endl;
    cout << endl;
  }

  static float maxMark(Student *ptr, int size)
  {
    float max = ptr[0].getMarks();

    for (int i = 1; i < size; i++)
    {
      if (ptr[i].getMarks() > max)
      {
        max = ptr[i].getMarks();
      }
    }

    return max;
  }

  static void display_AllRecord(Student *ptr, int size)
  {
    for (int i = 0; i < size; i++)
    {
      ptr[i].displayRecord();
    }
  }
};

int main()
{
  int size;

  cout << "Enter the number of students: ";
  cin >> size;

  Student *ptr = new Student[size];

  for (int i = 0; i < size; i++)
  {
    cout << "\nEnter data for Student " << i + 1 << endl;
    ptr[i].setRecord();
  }

  cout << "\nAll Student Records:\n"
       << endl;

  Student::display_AllRecord(ptr, size);

  cout << "Highest Marks: " << Student::maxMark(ptr, size) << endl;

  delete[] ptr;

  return 0;
}