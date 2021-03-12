#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int day, month, year;
    cin >> day >> month >> year;
    if (month <= 2) {
            month += 12;
            year--;
    }
    int th;
    int k = year %100;
    th = (day +(13*(month + 1) / 5) + k + k/4 + year/400 - 2*year / 100) % 7;
    switch (th) {
    case 0 : cout << "Saturday"; break;
    case 1 : cout << "Sunday" ; break;
    case 2 : cout << "Monday"; break;
    case 3 : cout << "Tuesday"; break;
    case 4 : cout << "wednesday"; break;
    case 5 : cout << "thursday"; break;
    case 6 : cout << "friday"; break;
    }
    return 0;
}

