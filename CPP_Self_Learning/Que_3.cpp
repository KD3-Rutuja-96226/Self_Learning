#include<iostream>
using namespace std;
class Student
{
    private :
    int rollNo;
    float marks;
    public:
    Student(void) 
    { }
    Student(int rollNo, float marks):rollNo(rollNo),marks(marks)
    { }
    void acceptRecord(void)
    {
        cout<<"RollNo : ";
        cin>>rollNo;
        cout<<"Marks : ";
        cin>>marks;
    }
    void printRecord(void)
    {
        cout<<"Roll No : "<<rollNo<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
    void setMarks(float marks)
    {
        this->marks = marks;
    }
    float getMarks(void)
    {
        return this->marks;
    }
};
int menuList(void)
{
    int choice;
    cout<<"1.Enter Record."<<endl;
    cout<<"2.Display Record."<<endl;
    cout<<"3.Higest Marks."<<endl;
    cin>>choice;
    return choice;
}
int main()
{
    int n;
    cout<<"Enter the Number of Students : ";
    cin>>n;
    int choice;
    Student *arr = new Student[n];
    while((choice=menuList())!=0)
    {
        switch (choice)
        {
            case 1:
                for(int i=0;i<n;i++)
                {
                    arr[i].acceptRecord();
                }
                break;
            case 2:
                for(int i=0;i<n;i++){
                    arr[i].printRecord();
                }
                break;
            case 3:
                float hm = 0.0;
                for(int i=0;i<n;i++){
                    if(arr[i].getMarks() > hm){
                        hm = arr[i].getMarks();
                    }
                }
                cout<<"Highest Marks : "<<hm<<endl;
                break;
        }
    }
}