#include<iostream>
#include<fstream>
using namespace std;

class Student
{
private:
    int roll;
    char name[50];
    double marks;

public:
    void accept()
    {
        cout<<"Roll: ";
        cin>>roll;
        cout<<"Name: ";
        cin>>name;
        cout<<"Marks: ";
        cin>>marks;
    }

    void display()
    {
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }


    void writeToFile(ofstream &out)
    {
        out.write((char*)this, sizeof(*this));
    }

    void readFromFile(ifstream &in)
    {
        in.read((char*)this, sizeof(*this));
    }
};

int main()
{
    Student s1;

    ofstream fout("student.dat", ios::binary);
    s1.accept();
    s1.writeToFile(fout);
    fout.close();

    Student s2;
    ifstream fin("student.dat", ios::binary);
    s2.readFromFile(fin);
    fin.close();

    cout<<"\nData from file:\n";
    s2.display();

    return 0;
}