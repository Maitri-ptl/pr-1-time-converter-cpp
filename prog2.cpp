#include <iostream>

using namespace std;

class Second
{
public:
    int hour, minute, second, tsec;

public:
    void setSeconds()
    {
        cout << endl << "Enter hours: ";
        cin >> hour;

        cout << "Enter minutes: ";
        cin >> minute;

        cout << "Enter seconds: ";
        cin >> second;

        tsec = (hour * 3600) + (minute * 60) + (second);
    }
    void getSeconds()
    {
        cout << "Total seconds: " << tsec;
    }
};

int main()
{
    Second sec;
    sec.setSeconds();
    sec.getSeconds();

    return 0;
}