#include <iostream>
#include <queue>
#include <vector>
#define G greater<int>
using namespace std;
int N;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    priority_queue<int, vector<int>, G> minHeap;
    priority_queue<int> maxHeap;
    int mid = -99999;
    for (int i = 1; i <= N; i++)
    {
        int a;
        cin >> a;
        if (mid < a)
        {
            minHeap.push(a);
        }
        else
        {
            maxHeap.push(a);
        }

        if (maxHeap.size() + 1 <= minHeap.size())
        {

            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        else if (minHeap.size() + 1 <= maxHeap.size())
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }

        if (minHeap.size() > maxHeap.size())
        {
            mid = minHeap.top();
            cout << mid << "\n";
        }
        if (minHeap.size() < maxHeap.size())
        {
            mid = maxHeap.top();
            cout << mid << "\n";
        }
        if (minHeap.size() == maxHeap.size())
        {
            cout << maxHeap.top() << "\n";
            mid = (minHeap.top() + maxHeap.top()) / 2;
        }
    }

    return 0;
}