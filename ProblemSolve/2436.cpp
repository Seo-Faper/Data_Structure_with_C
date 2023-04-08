#include <iostream>
using namespace std;
long long int M, N;

int main()
{
    cin >> M >> N;
    long long int G = N / M;
    long long int Ans1 = 0;
    long long int Ans2 = 0;
    for (int i = 1; i * i <= G; i++)
    {
        if (G % i == 0)
        {
            long long int tmp1 = i;
            long long int tmp2 = G / i;
            bool flag = true;
            for (long long int j = 2; j < tmp1; j++)
            {
                if (tmp1 % j == 0 && tmp2 % j == 0)
                {
                    flag = false;
                }
            }
            if (flag)
            {
                Ans1 = M * tmp1;
                Ans2 = M * tmp2;
            }
        }
    }
    cout << Ans1 << " " << Ans2 << endl;
    return 0;
}