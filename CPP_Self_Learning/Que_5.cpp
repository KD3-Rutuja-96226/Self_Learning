#include <iostream>
#include<string>
using namespace std;
int my_strlen(const char* str) {
    int length = 0;
    while (*str != '\0') 
    { 
        length++;
        str++; 
    }
    return length;
}
char* my_strcpy(char* dest, const char* src) {
    char* saved_dest = dest; 
    while (*src != '\0') 
    {
        *dest = *src; 
        dest++;
        src++;
    }
    *dest = '\0'; 
    return saved_dest;
}

int main() {
    char source[] = "Hello C++";
    char destination[20];

    // Testing strlen
    cout << "Length of string: " << my_strlen(source) << endl;

    // Testing strcpy
    my_strcpy(destination, source);
    cout << "Copied string: " << destination << endl;

    return 0;
}
