#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void display(list<int> l1)
{
        cout<<"Element : ";
        list<int> :: iterator itr = l1.begin();
        while(itr != l1.end())
        {
            cout<<*itr<<", ";
            itr++;
        }
}
int main()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    l1.push_back(80);
    l1.push_back(60);
    l1.push_back(90);
    l1.push_back(8);

    l1.sort();
    display(l1); 

    cout<<"List Size : "<<l1.size()<<endl;
    cout<<"List : ";
    for(int value : l1)
    {
        cout<<value<<", ";
    }
    cout<<endl;
    cout<<"Reverse Order : ";
    list<int> :: iterator itr = l1.end();
    while(itr != l1.begin())
    {
        itr--;
        cout<<*itr<<",";

    }
    cout<<endl;
    cout<<"Increment each value by 5 :"<<endl;

    for(int &val : l1)
    {
        val += 5;
    }
    for(int val : l1)
    {
        cout<<val<<", ";
    }
    cout<<endl;
    cout<<"Const Iterator."<<endl;
    list<int> :: const_iterator itr2 = l1.begin();
    while(itr2 != l1.end())
    {
        cout<<*itr2<<", ";
        itr2++;
    }

    list<int> :: iterator itr4 = l1.begin();
    cout<<endl;
    cout<<"Modified vector : "; 
    while(itr4 != l1.end( ))
    {
        cout<<*itr4<<" , "; 
        itr4++; 
    }


}