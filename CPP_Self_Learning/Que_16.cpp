#include<iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student()
    {
        cout << "Constructor called\n";
    }

    void setMarks(int m)
    {
        if(m < 0)
            throw "Negative marks not allowed";
        marks = m;
    }

    void display()
    {
        cout << "Marks: " << marks << endl;
    }

    ~Student()
    {
        cout << "Destructor called\n";
    }
};

class SmartPtr
{
private:
    Student *ptr;

public:
    SmartPtr(Student *p = NULL)
    {
        ptr = p;
    }

    Student* operator->()
    {
        return ptr;
    }

    ~SmartPtr()
    {
        cout << "SmartPtr Destructor called\n";
        delete ptr;
    }
};

int main()
{
    try
    {
        SmartPtr s(new Student());

        int m;
        cout << "Enter marks: ";
        cin >> m;

        s->setMarks(m);
        s->display();
    }
    catch(const char* msg)
    {
        cout << "Exception: " << msg << endl;
    }
    catch(...)
    {
        cout << "Invalid input" << endl;
    }

    return 0;
}