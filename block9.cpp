#include <iostream>
using namespace std;
main()
{
    int h, x, y, hx, hy;
    cout << "Enter value of h :- ";
    cin >> h;
    cout << "Enter value of x co-ordinate :- ";
    cin >> x;
    cout << "Enter value of y co-ordinate :- ";
    cin >> y;
    hx = 2 * h;
    hy = 2 * h;
    // Conversion in Minutes
    if (((x % h == 0 && y % h == 0) && (x == y)) || (y == 0))
    {
        cout << "Border";
    }
    if ((hy > y) || (y >= h && (x % h == 1 || y % h == 1)))
    {
        cout << "Inside";
    }
    if ((hy < y) || (x <= h && (x % h == 1 || y % h == 1)))
    {
        cout << "Outside";
    }
}
