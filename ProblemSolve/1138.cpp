#include <iostream>
#include <vector>
using namespace std;
int N;

int main()
{

    cin >> N;
    vector<int> v;
    int arr[N + 1];
    for (int i = 1; i <= N; i++)
        cin >> arr[i];

    v.push_back(N);
    for (int i = N - 1; i > 0; i--)
    {
        // cout << arr[i] << "," << v.size() << "," << i;
        if (arr[i] == v.size())
        {
            v.push_back(i);
        }
        else
        {
            v.insert(v.begin() + arr[i], i);
        }
    }
    for (int i = 0; i < N; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}