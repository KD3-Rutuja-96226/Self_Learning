#include <iostream>
#include <string>
#include <exception>

using namespace std;

class NegativeMarkException : public exception
{
private:
    string message;

public:
    NegativeMarkException(int mark)
    {
        message = "Error: Input mark (" + to_string(mark) + ") cannot be negative!";
    }

    // Override what() to return the error message
    const string getMsg()
    {
        return message.c_str();
    }
};

class Student
{
private:
    string name;
    int marks;

public:
    Student(string n) : name(n), marks(0) {}

    void setMarks(int m)
    {
        if (m < 0)
        {
            throw NegativeMarkException(m);
        }
        marks = m;
        cout << "Marks for " << name << " set to: " << marks << endl;
    }

    void display()
    {
        cout << "Student: " << name << " | Marks: " << marks << endl;
    }
};

int main()
{
    Student s1("Aryan");
    int inputMark;

    cout << "Enter marks for student: ";
    cin >> inputMark;

    try
    {
        s1.setMarks(inputMark);
        s1.display();
    }
    catch (const NegativeMarkException &e)
    {
        cout << "Caught Custom Exception: " << e.what() << endl;
    }
    catch (const exception &e)
    {

        cout << "General Exception: " << e.what() << endl;
    }

    return 0;
}
