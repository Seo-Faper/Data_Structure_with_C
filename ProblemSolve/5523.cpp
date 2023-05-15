#include <iostream>
using namespace std;
int A, B;
int main()
{
    int n;

    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            A++;
        if (b > a)
            B++;
    }
    cout << A << " " << B << endl;
    return 0;
}