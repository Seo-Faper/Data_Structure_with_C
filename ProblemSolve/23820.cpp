#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = N - i - 1; j >= 0; j--)
        {
            cout << " ";
        }
        cout << "*";
        if (i > 1 && i < N)
        {
            for (int j = 0; j < 2 * i - 3; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        if (i == N)
        {
            for (int j = 0; j < 2 * i - 2; j++)
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}