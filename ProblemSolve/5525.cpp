#include <iostream>
#include <string>
using namespace std;
int N;
int main()
{
    cin >> N; // 필요한 0의 개수, 1이 시작되면 뒤에 "01"의 개수를 센다. N = 1 인 경우 101, N = 2 일 때는 10101이 된다. N = 3  = 101010101
    int a;
    cin >> a;
    string k;
    cin >> k;
    bool startIOI = false;
    // IOIOIIIIOI 에서 IOI 인 경우
    //
    for (int i = 0; i < a - N; i++)
    {
        if (k[i] == 'I')
        {
            // IOI 문자열 판별
            // 맞다면 i+=2*(N+1)
        }
    }
    return 0;
}