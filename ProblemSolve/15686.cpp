#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

#define endl "\n"
#define MAX 50
using namespace std;

/*
1. L 개의 치킨 가게 중 M 개를 선택하는 조합을 만든다. M개의 모든 경우의 수가 나온다.
2. 해당 조합의 치킨거리 값을 계산해 최소를 찾는다.

*/

int N, M, Chicken_Num, Answer;
int CITY[MAX][MAX];
vector<pair<int, int>> Home, Chiken;
int calculate(int r1, int c1, int r2, int c2)
{
    return abs(r1 - r2) + abs(c1 - c2);
}
int main()
{

    cin >> N >> M;
    Answer = 99999;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> CITY[i][j];
            if (CITY[i][j] == 1)
            {
                Home.push_back(make_pair(i, j));
            }
            else if (CITY[i][j] == 2)
            {
                Chiken.push_back(make_pair(i, j));
            }
        }
    }
    Chicken_Num = Chiken.size();
    vector<int> v(Chicken_Num), p(Chicken_Num);
    for (int i = 0; i < Chicken_Num; i++)
    {
        v[i] = i;
    }
    for (int i = 0; i < M; i++)
    {
        p[i] = 1;
    }

    do
    {
        int tmp = 0;
        for (int k = 0; k < Home.size(); k++)
        {

            int w = 0xffffff;

            int Hx = Home[k].first;
            int Hy = Home[k].second;
            for (int i = 0; i < v.size(); i++)
            {

                if (p[i] == 1)
                {

                    // Home 에 대해 가장 가까운 치킨 거리는 몇? -> w라 하자
                    w = min(w, calculate(Hx, Hy, Chiken[v[i]].first, Chiken[v[i]].second));
                }
            }
            // cout << w<<endl;
            tmp += w;
        }

        // M 개의 w가 나오고 그걸 모두 더한 값이 경우1 에 대한 도시의 치킨거리 값 -> tmp 라 하자.
        // cout<<tmp<<endl;
        Answer = min(Answer, tmp);
    } while (prev_permutation(p.begin(), p.end()));

    cout << Answer << endl;
    return 0;
}