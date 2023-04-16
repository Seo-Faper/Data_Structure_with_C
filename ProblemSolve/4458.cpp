#include <iostream>
#include <string>
using namespace std;
int N;
string k;
int main()
{

    cin >> N;
    cin.ignore();
    while (N--)
    {
        getline(cin, k);
        k[0] = toupper(k[0]);
        cout << k << endl;
    }
    return 0;
}