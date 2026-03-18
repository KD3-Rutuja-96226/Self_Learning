#include<iostream>
using namespace std;
class Swap{
    private : 
    int a;
    int b;

    public :
    void swapByValue(int a, int b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    void swapByReference(int &a, int &b)
    {
        int temp ;
        temp = a;
        a = b; 
        b = temp;
    }

};
int main()
{
    Swap s;
    int num1 = 10;
    int  num2 = 20;

    cout << "Before swapByValue: ";
    cout << num1 << " " << num2 << endl; 
    s.swapByValue(num1, num2);
    cout << "After swapByValue: ";
    cout << num1 << " " << num2 << endl;
    cout << "\nBefore swapByReference: "; 
    cout << num1 << " " << num2 << endl;
    s.swapByReference(num1, num2);
    cout << "After swapByReference: ";
    cout << num1 << " " << num2 << endl;
return 0;
}