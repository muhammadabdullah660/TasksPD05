#include <iostream>
using namespace std;
main()
{
    string fruit, day;
    float price, quantity;
    cout << "Enter name of fruit...";
    cin >> fruit;
    cout << "Enter day of week...";
    cin >> day;
    cout << "Enter quantity of fruit...";
    cin >> quantity;

    if (day == "Saturday" || day == "Sunday")
    {
        if (fruit == "Banana")
        {
            price = 2.70;
        }
        else if (fruit == "Apple")
        {
            price = 1.25;
        }
        else if (fruit == "Orange")
        {
            price = 0.90;
        }
        else if (fruit == "Grapefruit")
        {
            price = 1.60;
        }
        else if (fruit == "Kiwi")
        {
            price = 3.00;
        }
        else if (fruit == "Pineapple")
        {
            price = 5.60;
        }
        else if (fruit == "Grapes")
        {
            price = 4.20;
        }
    }
    else if (day != "Saturday" && day != "Sunday")
    {
        if (fruit == "Banana")
        {
            price = 2.50;
        }
        else if (fruit == "Apple")
        {
            price = 1.20;
        }
        else if (fruit == "Orange")
        {
            price = 0.85;
        }
        else if (fruit == "Grapefruit")
        {
            price = 1.45;
        }
        else if (fruit == "Kiwi")
        {
            price = 2.70;
        }
        else if (fruit == "Pineapple")
        {
            price = 5.50;
        }
        else if (fruit == "Grapes")
        {
            price = 3.85;
        }
    }
    else
    {
        cout << "Error";
    }
    price = price * quantity;
    cout << "Price :- " << price;
}
