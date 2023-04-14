#include <iostream>
using namespace std;
int T;
int main()
{
    cin >> T;
    for (int i = 0; i < T; i++)
    {

        int sumA = 0, sumB = 0;
        for (int i = 0; i < 9; i++)
        {
            int a, b;
            cin >> a >> b;
            sumA += a;
            sumB += b;
        }
        if (sumA > sumB)
        {
            cout << "Yonsei" << endl;
        }
        else if (sumA < sumB)
        {
            cout << "Korea" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}