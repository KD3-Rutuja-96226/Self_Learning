#include <iostream>
#include <string>
using namespace std;
namespace college
{
    class Student
    {
    private:
        int rollNo;
        string name;
        float marks;

    public:
        Student(int r, string n, float m)
        {
            rollNo = r;
            name = n;
            marks = m;
        }

        void setRollNo(int r)
        {
            rollNo = r;
        }
        void setName(string n)
        {
            name = n;
        }
        void setMarks(float m)
        {
            marks = m;
        }

        int getRollNo()
        {
            return rollNo;
        }
        string getName()
        {
            return name;
        }
        float getMarks()
        {
            return marks;
        }

        void display()
        {
            cout << "Student Details:\n";
            cout << "Roll No: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
        }
    };
    class Teacher
    {
    private:
        int id;
        string name;
        string subject;

    public:
        Teacher(int i, string n, string s)
        {
            id = i;
            name = n;
            subject = s;
        }

        void setId(int i)
        {
            id = i;
        }
        void setName(string n)
        {
            name = n;
        }
        void setSubject(string s)
        {
            subject = s;
        }
        int getId()
        {
            return id;
        }
        string getName()
        {
            return name;
        }
        string getSubject()
        {
            return subject;
        }

        void display()
        {
            cout << "\nTeacher Details:\n";
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl;
        }
    };
}
int main()
{
    college::Student s(1, "Rutuja", 85.5);
    college::Teacher t(101, "ABC", "Math");

    s.setMarks(90);
    t.setSubject("Science");

    s.display();
    t.display();

    return 0;
}

