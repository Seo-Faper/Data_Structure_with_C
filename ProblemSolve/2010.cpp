#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int con = 1;
    while (N--)
    {
        int a;
        cin >> a;
        con--;
        con += a;
    }
    cout << con << endl;
    return 0;
}