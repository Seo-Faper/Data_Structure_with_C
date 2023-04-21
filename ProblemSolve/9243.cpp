#include <iostream>
using namespace std;
int N;
int main()
{
    cin >> N;
    string a;
    string b;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i] == '0')
                a[i] = '1';
            else
                a[i] = '0';
        }
    }
    cout << a << "\n"
         << b << endl;
    if (a == b)
    {
        cout << "Deletion succeeded" << endl;
    }
    else
    {
        cout << "Deletion failed" << endl;
    }
    return 0;
}