#include <iostream>
#include <string.h>

#define MAX 100000
using namespace std;
int a, b;
bool prime[MAX + 1];

int isUnderPrime(int x)
{
    int count = 0;
    int num = x;
    for (int i = 2; i <= num; i++)
    {
        if (prime[i] && num % i == 0)
        {
            count++;
            num /= i;
            i--;
        }
    }
    if (prime[count])
        return 1;
    return 0;
}
int main()
{

    cin >> a >> b;

    for (int i = 2; i <= b; i++)
    {
        prime[i] = true;
    }
    for (int i = 2; i * i <= b; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= b; j += i)
            {
                prime[j] = false;
            }
        }
    }
    int ans = 0;
    for (int i = a; i <= b; i++)
    {
        if (isUnderPrime(i))
            ans++;
    }
    cout << ans << endl;
    return 0;
}