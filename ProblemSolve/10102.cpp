#include <iostream>
#include <string>
using namespace std;
int N;
string k;
int main()
{
    cin >> N;
    cin >> k;
    int a = 0;
    int b = 0;
    for (int i = 0; i < N; i++)
    {
        if (k[i] == 'A')
            a++;
        else
            b++;
    }
    if (a > b)
        cout << "A" << endl;
    else if (a < b)
        cout << "B" << endl;
    else
        cout << "Tie" << endl;
    return 0;
}