#include <iostream>
#include <cmath>
using namespace std;
int N, S;
int arr[102];
int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> arr[i];
    cin >> S;
    for (int i = 0; i < S; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            for (int j = b; j <= N; j++)
            {
                if (j % b == 0)
                    arr[j] = arr[j] ? 0 : 1;
            }
        }
        else
        {

            int start_index = min(N - b, b - 1);
            arr[b] = arr[b] ? 0 : 1;
            for (int k = 1; k <= start_index; k++)
            {
                if (arr[b - k] != arr[b + k])
                {
                    break;
                }
                else
                {
                    // cout << b - k << " , " << b + k << "는 서로 대칭이니까 뒤집자." << endl;
                    arr[b - k] = arr[b - k] ? 0 : 1;
                    arr[b + k] = arr[b + k] ? 0 : 1;
                }
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (i % 20 == 0)
            cout << "\n";
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}