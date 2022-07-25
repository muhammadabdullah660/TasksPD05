#include <iostream>
using namespace std;
main()
{
    char serviceCode;
    float min, minDiff, dayMin, nightMin, minDiffD, minDiffN;
    cout << "Enter a service Code (r or R for regular service / p or P for premium service)...";
    cin >> serviceCode;

    if (serviceCode == 'R' || serviceCode == 'r')
    {
        cout << "Enter number of minutes...";
        cin >> min;
        cout << "Type of service :- " << serviceCode;
        cout << "Number of minutes service was used :- " << min;
        if (min <= 50)
        {
            cout << "$10.00";
        }
        else if (min > 50)
        {
            minDiff = min - 50;
            minDiff = (minDiff * 0.20) + 10;
            cout << "$" << minDiff;
        }
    }
    else if (serviceCode == 'P' || serviceCode == 'p')
    {
        cout << "Type of service :- " << serviceCode << endl;
        cout << "Number of minutes service was used during day :- " << endl;
        cin >> dayMin;
        cout << "Number of minutes service was used during night :- " << endl;
        cin >> nightMin;

        if (dayMin <= 75)
        {
            minDiffD = 25.00;
        }
        else if (dayMin > 75)
        {
            minDiffD = dayMin - 75;
            minDiffD = (minDiffD * 0.10) + 25;
        }

        if (nightMin <= 100)
        {
            minDiffN = 25.00;
        }
        else if (nightMin > 100)
        {
            minDiffN = nightMin - 100;
            minDiffN = (minDiffN * 0.05) + 25;
        }
        cout << "Day $" << minDiffD << endl;
        cout << "Night $" << minDiffN << endl;
        minDiff = minDiffD + minDiffN;
        cout << "Total $" << minDiff << endl;
    }
    else
    {
        cout << "Error";
    }
}
