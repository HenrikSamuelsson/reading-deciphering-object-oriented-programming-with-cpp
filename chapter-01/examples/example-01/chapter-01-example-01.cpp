#include <iostream>

using namespace std;    // we'll limit the namespace shortly

int main()
{
    char name[20];    // caution, uninitialized array of char
    int age = 0;

    cout << "Please enter a name and an age: ";
    cin >> name >> age;    // caution, may overflow name var.
    cout << "Hello " << name;
    cout << ". You are " << age << " years old." << endl;

    return 0;
}
