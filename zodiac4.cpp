#include <iostream>
using namespace std;
main()
{
    int day;
    string month;

    cout << "Day...";
    cin >> day;

    cout << "Month...";
    cin >> month;

    if ((month == "March" && (day >= 21 && day <= 31)) || (month == "April" && (day >= 1 && day <= 19)))
    {
        cout << "Aries";
    }
    else if ((month == "April" && (day >= 20 && day <= 30)) || (month == "May" && (day >= 1 && day <= 20)))
    {
        cout << "Taurus";
    }
    else if ((month == "May" && (day >= 21 && day <= 31)) || (month == "June" && (day >= 1 && day <= 20)))
    {
        cout << "Gemini";
    }
    else if ((month == "June" && (day >= 21 && day <= 31)) || (month == "July" && (day >= 1 && day <= 22)))
    {
        cout << "Cancer";
    }
    else if ((month == "July" && (day >= 23 && day <= 31)) || (month == "August" && (day >= 1 && day <= 22)))
    {
        cout << "Leo";
    }
    else if ((month == "August" && (day >= 23 && day <= 30)) || (month == "September" && (day >= 1 && day <= 22)))
    {
        cout << "Virgo";
    }
    else if ((month == "September" && (day >= 23 && day <= 30)) || (month == "October" && (day >= 1 && day <= 22)))
    {
        cout << "Libra";
    }
    else if ((month == "October" && (day >= 23 && day <= 31)) || (month == "November" && (day >= 1 && day <= 21)))
    {
        cout << "Scorpio";
    }
    else if ((month == "November" && (day >= 22 && day <= 30)) || (month == "December" && (day >= 1 && day <= 21)))
    {
        cout << "Sagittarius";
    }
    else if ((month == "December" && (day >= 22 && day <= 31)) || (month == "January" && (day >= 1 && day <= 19)))
    {
        cout << "Capricorn";
    }
    else if ((month == "January" && (day >= 20 && day <= 31)) || (month == "February" && (day >= 1 && day <= 18)))
    {
        cout << "Aquarius";
    }
    else if ((month == "February" && (day >= 19 && day <= 31)) || (month == "March" && (day >= 1 && day <= 20)))
    {
        cout << "Pisces";
    }
}