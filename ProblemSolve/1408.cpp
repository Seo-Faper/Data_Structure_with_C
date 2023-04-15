#include <iostream>
#include <string>
using namespace std;
void printTime(int S)
{
    int M, H;
    M = S / 60;
    H = M / 60;
    S %= 60;
    M %= 60;
    printf("%02d:%02d:%02d\n", H, M, S);
}
int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;
    int H1 = stoi(a.substr(0, 2));
    int M1 = stoi(a.substr(3, 5));
    int S1 = stoi(a.substr(6, 8));

    int H2 = stoi(b.substr(0, 2));
    int M2 = stoi(b.substr(3, 5));
    int S2 = stoi(b.substr(6, 8));

    S1 += H1 * 3600 + M1 * 60;
    S2 += H2 * 3600 + M2 * 60;
    int ans = 0;
    if (S2 > S1)
    {
        ans = S2 - S1;
    }
    else
    {
        ans = 24 * 3600 - (S1 - S2);
    }
    printTime(ans);
    return 0;
}