#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    string k = "";
    for (int i = 0; i < N; i++)
    {
        if (k.size() > M)
        {
            k = k.substr(0, M);
            break;
        }
        k += to_string(N);
    }
    cout << k << endl;
    return 0;
}