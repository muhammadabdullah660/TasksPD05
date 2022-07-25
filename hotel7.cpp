#include <iostream>
using namespace std;
main()
{
    string month;
    int stays;
    float price, quantity, studioP, apartmentP;
    cout << "Enter name of month...";
    cin >> month;
    cout << "Enter number of stays...";
    cin >> stays;
    if (month == "May" || month == "October")
    {

        studioP = 50.0 * stays;
        apartmentP = 65.0 * stays;

        if (stays <= 7)
        {
            studioP = 50.0 * stays;
            apartmentP = 65.0 * stays;
        }
        else if (stays >= 7 && stays <= 14)
        {
            studioP = studioP - ((50.0 * stays) * 0.05);
            apartmentP = 65.0 * stays;
        }
        else if (stays > 14)
        {
            studioP = studioP - ((50.0 * stays) * 0.30);
            apartmentP = apartmentP - ((65.0 * stays) * 0.10);
        }
    }
    else if (month == "June" || month == "September")
    {
        studioP = 75.0 * stays;
        apartmentP = 68.0 * stays;
        if (stays <= 7)
        {
            studioP = 75.0 * stays;
            apartmentP = 68.0 * stays;
        }
        else if (stays >= 7 && stays <= 14)
        {
            studioP = 75.0 * stays;
            apartmentP = 68.0 * stays;
        }
        else if (stays > 14)
        {
            studioP = studioP - ((75.0 * stays) * 0.20);
            apartmentP = apartmentP - ((68.0 * stays) * 0.10);
        }
    }
    else if (month == "July" || month == "August")
    {
        studioP = 76.0 * stays;
        apartmentP = 77 * stays;
        if (stays <= 7)
        {
            studioP = 76.0 * stays;
            apartmentP = 77.0 * stays;
        }
        else if (stays >= 7 && stays <= 14)
        {
            studioP = 76.0 * stays;
            apartmentP = 77.0 * stays;
        }
        else if (stays > 14)
        {
            studioP = 76.0 * stays;
            apartmentP = apartmentP - ((apartmentP)*0.10);
        }
    }
    cout << "Apartment Price :- " << apartmentP << "$" << endl;
    cout << "Studio Price :- " << studioP << "$" << endl;
}
