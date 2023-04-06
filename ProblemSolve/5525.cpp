#include <iostream>
#include <string>
using namespace std;
int N, a;
int main()
{
    cin >> N >> a; // 필요한 0의 개수, 1이 시작되면 뒤에 "01"의 개수를 센다. N = 1 인 경우 101, N = 2 일 때는 10101이 된다. N = 3  = 101010101

    string k;
    cin >> k;
    // IOIOIIIIOI 에서 IOI 인 경우
    //
    int result = 0;
    for (int i = 0; i < a; i++)
    {
        int t = 0;
        if (k[i] == 'I')
        {
            while (k[i + 1] == 'O' && k[i + 2] == 'I')
            {
                t++;
                //    cout << a << ", " << t << endl;
                if (N == t)
                {
                    //    cout << t << endl;
                    t--;
                    result++;
                }
                i += 2;
            }
        }
    }
    cout << result << endl;
    return 0;
}