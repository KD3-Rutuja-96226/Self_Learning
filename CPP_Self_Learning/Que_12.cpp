#include<iostream>
using namespace std;

class Product
{
protected:
    string title;
    float price;

public:
    virtual void accept()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }

    virtual void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    virtual ~Product() {}  
};

class Book : public Product
{
private:
    int pages;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter pages: ";
        cin >> pages;
    }

    void display()
    {
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Product
{
private:
    float playtime;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter playtime: ";
        cin >> playtime;
    }

    void display()
    {
        cout << "Playtime: " << playtime << endl;
    }
};

int main()
{
    Product *arr[5];
    int choice;

    for(int i = 0; i < 5; i++)
    {
        cout << "1. Book, 2. Tape, Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                arr[i] = new Book();
                arr[i]->accept();
                break;

            case 2:
                arr[i] = new Tape();
                arr[i]->accept();
                break;

            default:
                cout << "Invalid choice\n";
                i--; 
        }
    }

    cout << "\n--- Display Only Pages & Playtime ---\n";

    for(int i = 0; i < 5; i++)
    {
        arr[i]->display();  
    }

    for(int i = 0; i < 5; i++)
    {
        delete arr[i];
    }

    return 0;
}