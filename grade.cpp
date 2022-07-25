#include <iostream>
using namespace std;
main()
{
    float eng, chem, bio, math, ss, total;
    string name;

    cout << "Enter Your name...";
    cin >> name;

    cout << "Enter Your English Marks...";
    cin >> eng;

    cout << "Enter Your Chemistry Marks...";
    cin >> chem;

    cout << "Enter Your Biology Marks...";
    cin >> bio;

    cout << "Enter Your Mathematics Marks...";
    cin >> math;

    cout << "Enter Your Social Science Marks...";
    cin >> ss;

    total = eng + chem + bio + math + ss;
    float perct = ((eng + chem + bio + math + ss) / 500.0) * 100;

    if (perct > 90)
    {
        cout << "Student Name :- " << name << endl;
        cout << "Total Marks :- " << total << endl;
        cout << "Obtained Percentage :- " << perct << endl;
        cout << "A+ Grade";
    }
    else if (perct > 80 && perct < 90)
    {
        cout << "Student Name :- " << name << endl;
        cout << "Total Marks :- " << total << endl;
        cout << "Obtained Percentage :- " << perct << endl;
        cout << "A Grade";
    }
    else if (perct > 70 && perct < 80)
    {
        cout << "Student Name :- " << name << endl;
        cout << "Total Marks :- " << total << endl;
        cout << "Obtained Percentage :- " << perct << endl;
        cout << "B+ Grade";
    }
    else if (perct > 60 && perct < 70)
    {
        cout << "Student Name :- " << name << endl;
        cout << "Total Marks :- " << total << endl;
        cout << "Obtained Percentage :- " << perct << endl;
        cout << "B Grade";
    }
    else if (perct > 50 && perct < 60)
    {
        cout << "Student Name :- " << name << endl;
        cout << "Total Marks :- " << total << endl;
        cout << "Obtained Percentage :- " << perct << endl;
        cout << "C Grade";
    }
    else if (perct > 40 && perct < 50)
    {
        cout << "Student Name :- " << name << endl;
        cout << "Total Marks :- " << total << endl;
        cout << "Obtained Percentage :- " << perct << endl;
        cout << "D Grade";
    }
    else if (perct < 40)
    {
        cout << "Student Name :- " << name << endl;
        cout << "Total Marks :- " << total << endl;
        cout << "Obtained Percentage :- " << perct << endl;
        cout << "F Grade";
    }
}