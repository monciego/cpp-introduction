#include <iostream>

using namespace std;

int main()
{
    string firstName = "Jericho"; // string is a text
    string lastName = "Bantiquete"; 
    string hobby= "programming";
    int age; // integer is a whole number
    age = 22;

    cout << "Hello my name is " << firstName << " " << lastName <<  endl;
    cout << age << " years of age." << endl;
    cout <<  "I love " << hobby << endl;
    hobby = "reading books";
    cout <<  "and " << hobby << endl;
    
    return 0; 
}