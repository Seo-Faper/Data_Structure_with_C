#include <iostream>
using namespace std;
int A[10];
int B[10];
int main()
{
    int a = 0;
    int b = 0;
    for (int i = 0; i < 10; i++)
        cin >> A[i];
    for (int i = 0; i < 10; i++)
    {
        cin >> B[i];
        if (A[i] > B[i])
            a++;
        if (A[i] < B[i])
            b++;
    }
    if (a > b)
        cout << "A" << endl;
    else if (a < b)
        cout << "B" << endl;
    else
        cout << "D" << endl;
    return 0;
}