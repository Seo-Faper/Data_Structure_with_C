#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N;
vector<int> House;
int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        House.push_back(a);
    }

    sort(House.begin(), House.end()); // 중앙에 있는 안테나가 절대적으로 유리하다 (그리디)
    if (N % 2 == 0)
        cout << House[N / 2 - 1] << endl;
    else
        cout << House[N / 2] << endl;
    return 0;
}