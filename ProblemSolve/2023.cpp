#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int N;
string v;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void dfs(int x, int d)
{
    if (d == N)
    {
        cout << v << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        int currNum = stoi(v + to_string(i));
        if (isPrime(currNum))
        {
            v += to_string(i);
            dfs(currNum, d + 1);
            v = v.substr(0, v.size() - 1);
        }
    }
}
int main()
{
    cin >> N;
    v = "";
    dfs(N, 0);
    return 0;
}