#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int A;
int P;

int main()
{
    vector<int> v;
    int ans = 0;
    cin >> A >> P;
    int r = A;
    while (1)
    {
        int curr = 0;
        string tmp = to_string(r);
        for (int i = 0; i < tmp.size(); i++)
        {
            int p = tmp[i] - '0';
            curr += pow(p, P);
        }
        r = curr;
    }
    cout << ans << endl;
    return 0;
}