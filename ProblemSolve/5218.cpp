#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    cin.ignore();
    while (N--)
    {
        string a;
        string b;
        cin >> a >> b;
        cout << "Distances: ";
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] - b[i] > 0)
            {
                cout << 26 + b[i] - a[i] << " ";
            }
            else
            {
                cout << b[i] - a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}