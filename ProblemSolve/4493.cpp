#include <iostream>
using namespace std;
int T;
int main()
{
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            string A;
            string B;
            cin >> A >> B;
            if (A == "R" && B == "S")
                a++;
            if (A == "R" && B == "P")
                b++;
            if (A == "S" && B == "R")
                b++;
            if (A == "S" && B == "P")
                a++;
            if (A == "P" && B == "R")
                a++;
            if (A == "P" && B == "S")
                b++;
        }
        if (a > b)
            cout << "Player 1" << endl;
        else if (a < b)
            cout << "Player 2" << endl;
        else
            cout << "TIE" << endl;
    }
    return 0;
}