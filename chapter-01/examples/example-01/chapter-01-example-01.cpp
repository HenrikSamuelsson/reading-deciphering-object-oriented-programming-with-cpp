// Include the istream library to gain cin and cout.
#include <iostream>

// Indicate that we're using the std name space, we'll limit the namespace
// shortly.
using namespace std;

// The main function is the entry point of our application.
int main()
{
    // Storage for name of the user. Caution, uninitialized array of char.
    char name[20];
    // Storage far the age of the user.
    int age = 0;

    // Prompt the user for input.
    cout << "Please enter a name and an age: ";

    // Use cin to read keyboard input. Will additionally automatically flush
    // the buffer associated with cout. Caution, may overflow the name
    // variable.
    cin >> name >> age;

    // Print out a greeting to the user. The usage of endl will place a new
    // line character at the end of the output buffer and flush the buffer.
    cout << "Hello " << name << "." << endl;
    cout << "You are " << age << " years old." << endl;

    // Return the programs exit status to the programming shell.
    return 0;
}
