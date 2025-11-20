#include <iostream>

using namespace std;

class Time
{
public:
    int hour, minute, second, tsec;

public:
    void setTime()
    {
        cout << "Enter total seconds: ";
        cin >> tsec;
        hour = tsec / 3600;
        minute = (tsec % 3600) / 60;
        second = tsec % 60;
    }

    void getTime()
    {
        cout << "HH:MM:SS => ";
        if (hour < 10)
        {
            cout << "0" << hour << ":";
        }
        else
        {
            cout << hour << ":";
        }
        if (minute < 10)
        {
            cout << "0" << minute << ":";
        }
        else
        {
            cout << minute << ":";
        }
        if (second < 10)
        {
            cout << "0" << second;
        }
        else
        {
            cout << second;
        }
    }
};

int main()
{
    Time time;

    time.setTime();
    time.getTime();

    return 0;
}