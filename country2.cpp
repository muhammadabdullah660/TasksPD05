#include <iostream>
using namespace std;
main()
{
    string country;

    cout << "Enter the name of country you live in...";
    cin >> country;

    if (country != "Australia" && country != "Germany")
    {
        cout << "You should come to visit these sometime!";
    }
}
