#include <iostream>
using namespace std;
int N;
int main()
{
    cin >> N;
    int chang = 100, sang = 100;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
            chang -= b;
        else if (a > b)
            sang -= a;
    }
    cout << chang << "\n"
         << sang << endl;
    return 0;
}