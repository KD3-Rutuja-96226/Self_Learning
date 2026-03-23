#include<iostream>
#include<memory>
using namespace std;

class Demo
{
public:
    Demo() { cout<<"Constructor\n"; }
    ~Demo() { cout<<"Destructor\n"; }
};

int main()
{
    unique_ptr<Demo> p1(new Demo());
    unique_ptr<Demo> p2 = move(p1); 
    if(p1 == NULL)
        cout<<"p1 is now null\n";

    shared_ptr<Demo> s1(new Demo());
    shared_ptr<Demo> s2 = s1;

    cout<<"Shared count: "<<s1.use_count()<<endl;


    weak_ptr<Demo> w1 = s1;

    if(auto temp = w1.lock())
        cout<<"Weak pointer accessed object\n";

    return 0;
}