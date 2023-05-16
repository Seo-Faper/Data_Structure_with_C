#include <iostream>
#include <algorithm>
using namespace std;
int arr[51];
int main()
{
    int K, N;
    cin >> K >> N;
    for (int i = 0; i < K; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + K);

    cout << endl;
    return 0;
}