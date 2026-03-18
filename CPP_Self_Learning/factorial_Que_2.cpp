#include<iostream>
using namespace std;
inline int factorial(int n)
{
    int f = 1;
    for(int i=1;i<=n;i++){
        f = f*i;
    }
    return f;
}
inline int power(int b,int x)
{
    int result = 1;
    for(int i=1;i<=x;i++){
        result = result*b;
    }
    return result; 
}
int main()
{
    int n = 3;
    int result = factorial(n);
    cout<<"The Factorial of "<<n<<" is "<<result<<endl;
    int pw = power(2,5);
    cout<<"The Power is "<<pw;
}


