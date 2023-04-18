#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int N;
vector<bool> arr(1000000 + 1);
vector<int> v;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m = 1000000;

    arr[1] = true;
    for (int i = 2; i <= sqrt(m); i++)
    {
        if (!arr[i])
            v.push_back(i);
        for (int j = i + i; j <= m; j += i)
            arr[j] = true;
    }
    do
    {
        cin >> N;
        if (N == 0)
            break;
        for (int i = 1; i < v.size(); i++)
        {
            if (arr[N - v[i]] == false)
            {
                cout << N << " = " << v[i] << " + " << N - v[i] << "\n";
                break;
            }
        }

    } while (N);

    return 0;
}