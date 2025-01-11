// Example to illustrate usage of iostream manipulators.

#include <iomanip>    // Manipulators.
#include <iostream>

using std::cin;
using std::cout;

// Places a newline charater in the cout buffer and flushes the buffer.
using std::endl;

// Clears the content of the output stream buffer.
using std::flush;

// Defines the precision used to print floating point numbers.
using std::setprecision;

// Sets the width for input and output.
using std::setw;

int main()
{
    const int buffSize = 20;
    char name[buffSize];    // Caution, uninitialized array of char.
    float gpa = 0.0;

    cout << "Please enter a name: ";

    // By using setw we won't overflow the input buffer of name.
    cin >> setw(buffSize) >> name;
    // Take out 1000 characters from the buffer but stop if finding a newline.
    // This is just in case user enters a very very long name.
    cin.ignore(1000, '\n');

    cout << "Please enter a grade point average (GPA): ";
    cin >> gpa;

    cout << "Hello " << name << flush;
    cout << ". GPA is: " << setprecision(3) << gpa << endl;

    return 0;
}
