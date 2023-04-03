#include <iostream>
using namespace std;
int N;
int main()
{
    cin >> N;
    int ans = 0;
    while (!(N % 5 == 0 || N <= 0)) //  2를 써야 하는 경우만 먼저 보자 , 5의 배수가 아니면 2는 무조건 써야지.
    {
        N -= 2;
        ans++;
    }
    if (N >= 0)
        cout << N / 5 + ans << endl; // 2의 개수 + 5의 개수
    else
        cout << -1 << endl; // 아니면 못만드는 거
    return 0;
}