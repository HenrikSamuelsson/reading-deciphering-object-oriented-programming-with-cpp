// Example showing traditional enums and strongly-typed enums.

#include <iostream>

using std::cout;
using std::endl;

// First example of traditional enumerated type. Values are 0 to 6.
enum day
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

// Second example of traditional enumerated type. Values are 1 to 5. We are not
// allowed to reuse enumerators between enumerated types, which forces us to
// come up with new names for the days in this second example.
enum workDay
{
    Mon = 1,
    Tue,
    Wed,
    Thu,
    Fri
};

// Strongly-typed enums default to int, but can be any integral type:
//
// - int
// - char
// - short int
// - long int
// - bool

// Strongly-typed enums can be a struct or class as seen below.

// First example of strongly-typed enum.
enum struct WinterHoliday
{
    Diwali,
    Hanukkah,
    ThreeKings,
    WinterSolstice,
    StLucia,
    StNicholas,
    Christmas,
    NewYear,
    Kwanzaa
};

// Second example of strongly-typed enum. Note that NewYear appears again here
// showing us that strongly-enums allows for reuse of enumerator names.
enum class Holiday : short int
{
    NewYear = 1,
    MLK,
    Memorial,
    Independence,
    Labor,
    Thanksgiving
};

int main()
{
    day birthday = Monday;
    workDay payday = Fri;

    cout << "Birthday is " << birthday << endl;
    cout << "Payday is " << payday << endl;

    WinterHoliday holiday = WinterHoliday::StNicholas;
    Holiday favorite = Holiday::NewYear;

    // When printing out strongly-typed enumerations we are unfortunately
    // forced to cast to the type of the enumeration using a static_cast.
    cout << "Winter holiday is " << static_cast<int>(holiday) << endl;
    cout << "Favorite holiday is " << static_cast<short int>(favorite) << endl;

    return 0;
}
