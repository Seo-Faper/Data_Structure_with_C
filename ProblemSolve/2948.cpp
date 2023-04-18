#include <iostream>
using namespace std;
int WeekDay(int Month, int Day)
{
    int Year = 2009;
    if (Month < 3)
    {
        Year -= 1;
        Month += 12;
    }
    return (Year + (Year / 4) - (Year / 100) + (Year / 400) + (13 * Month + 8) / 5 + Day) % 7;
}
int main()
{
    int M, D;
    cin >> D >> M;
    string arr[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"};
    cout << arr[WeekDay(M, D)] << endl;
    return 0;
}