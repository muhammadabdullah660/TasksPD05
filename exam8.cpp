#include <iostream>
using namespace std;
main()
{
    float examStartH, examStartM, stuArrivalH, stuArrivalM, diff, diffMin, totalArrival, totalStart;
    int diffHR;
    cout << "Exam Starting Time (hour) :- ";
    cin >> examStartH;
    cout << "Exam Starting Time (minutes) :- ";
    cin >> examStartM;
    cout << "Student hour of arrival :- ";
    cin >> stuArrivalH;
    cout << "Student minutes of arrival :- ";
    cin >> stuArrivalM;
    // Conversion in Minutes
    totalStart = (examStartH * 60.0) + examStartM;
    totalArrival = (stuArrivalH * 60.0) + stuArrivalM;

    if (examStartH <= 23 && examStartM <= 59 && stuArrivalH <= 23 && stuArrivalM <= 59)
    {
        diff = totalStart - totalArrival;
        cout << diff << endl;
        // On time
        if (diff == 0)
        {
            cout << "ON TIME" << endl;
        }
        else if (diff > 0 && diff <= 30)
        {
            cout << "ON TIME" << endl;
            cout << diff << " minutes before start" << endl;
        }
        // Early in minutes
        else if (diff >= 30 && diff <= 59)
        {
            cout << "Early" << endl;
            cout << diff << " minutes before start" << endl;
        }
        // Early in hours and minutes
        else if (diff > 59)
        {
            diffMin = diff / 60.0;
            diffHR = diff / 60;
            diffMin = (diffMin - diffHR) * 60;
            cout << "Early" << endl;
            cout << diffHR << " hours " << diffMin << " minutes before start" << endl;
        }
        // Late
        else if (diff < 0)
        {
            diff = diff * (-1);
            diffMin = diff / 60.0;
            diffHR = diff / 60;
            diffMin = (diffMin - diffHR) * 60;
            cout << "Late" << endl;
            cout << diffHR << " hours " << diffMin << " minutes After start" << endl;
        }
    }
}
