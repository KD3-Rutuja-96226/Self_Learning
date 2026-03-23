#include<iostream>
using namespace std;

template<class T>
class Array
{
private:
    T *arr;
    int size;

public:

    Array(int size)
    {
        this->size = size;
        arr = new T[size];
    }

 
    ~Array()
    {
        delete[] arr;
    }

    void accept()
    {
        for(int i=0;i<size;i++)
            cin>>arr[i];
    }

    void display()
    {
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }


    T& operator[](int index)
    {
        return arr[index];
    }


    Array(const Array &other)
    {
        size = other.size;
        arr = new T[size];
        for(int i=0;i<size;i++)
            arr[i] = other.arr[i];
    }


    Array& operator=(const Array &other)
    {
        if(this != &other)
        {
            delete[] arr;
            size = other.size;
            arr = new T[size];
            for(int i=0;i<size;i++)
                arr[i] = other.arr[i];
        }
        return *this;
    }
};

int main()
{
    Array<int> a(3);
    cout<<"Enter elements:\n";
    a.accept();

    cout<<"Array: ";
    a.display();

    cout<<"Access using []: "<<a[1]<<endl;

    return 0;
}