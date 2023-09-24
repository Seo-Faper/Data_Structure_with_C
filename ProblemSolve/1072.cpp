#include <iostream>
using namespace std;
long long x, y, z;
int main()
{
    cin >> x >> y;
    z = y * 100 / x;
    if (z > 99)
    {
        cout << -1 << endl;
        return 0;
    }
    long long left = 1;
    long long right = 1000000000;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long new_x = x + mid;
        long long new_y = y + mid;
        long long new_z = (new_y * 100) / new_x;
        //    cout << new_z << endl;

        if (new_z > z)
            right = mid - 1;
        else
            left = mid + 1;
    }
    cout << left << endl;
    return 0;
}