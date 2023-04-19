#include <iostream>
#include <vector>
using namespace std;
int N;
int arr[2001];
int main()
{
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}