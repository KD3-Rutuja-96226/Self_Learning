#include<iostream>
using namespace std;
class Laptop
{
    private :
    int brand_id;
    int price;
    public:
    Laptop(void) : brand_id(1), price(50000)
    {
        cout<<"Laptop Constructor Called."<<endl;
    }
    void display(void)
    {
        cout<<"Brand_Id : "<<brand_id<<endl;
        cout<<"Price : "<<price<<endl;
    }
    ~Laptop()
    {
        cout<<"Laptop Destructor Called."<<endl;
    }
};
int main()
{
    Laptop l;
    l.display();
}
