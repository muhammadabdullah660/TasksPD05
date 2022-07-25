#include <iostream>
using namespace std;
main()
{
    string temp, humidity;

    cout << "Enter the temperature (Warm Or Cold)...";
    cin >> temp;
    cout << "Enter the humidity (Dry Or Humid)...";
    cin >> humidity;

    if (temp == "Warm" && humidity == "Dry")
    {
        cout << "Play Tennis";
    }
    else if (temp == "Warm" && humidity == "Humid")
    {
        cout << "Swim";
    }
    else if (temp == "Cold" && humidity == "Dry")
    {
        cout << "Play Basketball";
    }
    else if (temp == "Cold" && humidity == "Humid")
    {
        cout << "Watch TV";
    }
}
