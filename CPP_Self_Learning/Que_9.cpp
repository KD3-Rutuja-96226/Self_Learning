#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Pure virtual function 
    virtual void work() = 0;
};

class Student : public Person {
private:
    int marks;

public:
    Student(string n, int a, int m) : Person(n, a) {
        marks = m;
    }

    void study() {
        cout << "Student is studying" << endl;
    }

    void work() override {
        cout << "Student studies and completes assignments" << endl;
    }

    void displayStudent() {
        display();
        cout << "Marks: " << marks << endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    Teacher(string n, int a, float s) : Person(n, a) {
        salary = s;
    }

    void teach() {
        cout << "Teacher is teaching" << endl;
    }

    void work() override {
        cout << "Teacher teaches students and prepares lectures" << endl;
    }

    void displayTeacher() {
        display();
        cout << "Salary: " << salary << endl;
    }
};

int main() {

    Person* p;

    Student s("Rutuja", 22, 85);
    p = &s;

    cout << " Student Details " << endl;
    s.displayStudent();
    s.study();
    p->work();  
    cout << endl;

    Teacher t("Dr. Sharma", 40, 50000);
    p = &t;

    cout << " Teacher Details " << endl;
    t.displayTeacher();
    t.teach();
    p->work();  

    return 0;
}