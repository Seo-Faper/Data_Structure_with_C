
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define P vector<int>, greater<int>

using namespace std;

int N;
int arr[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    priority_queue<int, P> pq;
    int idx = 0, t = 0;
    for (int i = 0; i < N; i++)
    {

        cin >> t;
        if (!arr[t])
            idx++;
        arr[t]++;
    }
    if (idx == 1)
    {
        for (int i = 0; i < N; i++)
        {
            cout << t << " ";
        }
        return 0;
    }
    for (int i = 0; i <= 1000; i++)
    {
        if (arr[i])
        {
            pq.push(i);
        }
    }

    // cout << pq.size() <<endl;
    int F = -99;
    while (pq.size() > 2)
    {

        int CN = pq.top();
        pq.pop();
        if (F + 1 == CN) // 1 2 3 에서 1 | 2 3 일 때 F = 1 이고 CN = 2 이면
        {
            int e = pq.top(); // pq : [3 4 5 6], F = 1, CN = 2 인 상태 이므로 3을 가져온다.
            cout << e << " "; // 출력하고
            arr[e]--;         // 갯수 빼 주고
            F = e;            // F = 3
            if (!arr[e])      // 갯수가 더 이상 존재하지 않으면 빼도 됨
                pq.pop();
            pq.push(CN); // 2 다시 넣음  , [4 5 6 2] 상태가 되고 Priority_Queue의 성질에 의해 [2 4 5 6] 이 됨
        }
        else
        { // 1 3 5 7 일 때 1| 3 5 7
            while (arr[CN]--)
                cout << CN << " ";
            F = CN;
        }
    }

    int a = pq.top();
    pq.pop();
    int b = pq.top();

    if (a + 1 == b) //  [1 2 ]일 때
    {
        while (arr[b]--)

            cout << b << " ";

        while (arr[a]--)

            cout << a << " ";
    }
    else // [ 1 3]
    {
        if (F + 1 == a)
        {
            cout << b << " ";
            arr[b]--;
        }
        while (arr[a]--)

            cout << a << " ";

        while (arr[b]--)

            cout << b << " ";
    }

    cout << "\n";
    return 0;
}