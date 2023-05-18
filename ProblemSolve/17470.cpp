#include <iostream>
#include <algorithm>
#include <vector>
#define V vector<int>
using namespace std;
int N, M, R;
vector<V> arr;
void printArray(const vector<V> &arr)
{
    for (const vector<int> &row : arr)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void operation1(vector<V> &arr)
{
    reverse(arr.begin(), arr.end());
}

void operation2(vector<V> &arr)
{
    for (vector<int> &row : arr)
    {
        reverse(row.begin(), row.end());
    }
}

void operation3(vector<V> &arr)
{
    vector<V> rotated(arr[0].size(), vector<int>(arr.size()));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            rotated[j][arr.size() - 1 - i] = arr[i][j];
        }
    }
    arr = rotated;
}

void operation4(vector<V> &arr)
{
    vector<V> rotated(arr[0].size(), vector<int>(arr.size()));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            rotated[arr[i].size() - 1 - j][i] = arr[i][j];
        }
    }
    arr = rotated;
}

void operation5(vector<V> &arr)
{
    int n = arr.size() / 2;
    int m = arr[0].size() / 2;
    vector<V> temp(arr.size(), vector<int>(arr[0].size()));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (i < n && j < m)
            {
                temp[i][j + m] = arr[i][j];
            }
            else if (i < n && j >= m)
            {
                temp[i + n][j] = arr[i][j];
            }
            else if (i >= n && j >= m)
            {
                temp[i][j - m] = arr[i][j];
            }
            else
            {
                temp[i - n][j] = arr[i][j];
            }
        }
    }
    arr = temp;
}
void operation6(vector<V> &arr)
{
    int n = arr.size() / 2;
    int m = arr[0].size() / 2;
    vector<V> temp(arr.size(), vector<int>(arr[0].size()));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (i < n && j < m)
            {
                temp[i + n][j] = arr[i][j];
            }
            else if (i < n && j >= m)
            {
                temp[i][j - m] = arr[i][j];
            }
            else if (i >= n && j >= m)
            {
                temp[i - n][j] = arr[i][j];
            }
            else
            {
                temp[i][j + m] = arr[i][j];
            }
        }
    }
    arr = temp;
}
int main()
{
    cin >> N >> M >> R;
    for (int i = 0; i < N; i++)
    {
        vector<int> vec;
        for (int j = 0; j < M; j++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
        }
        arr.push_back(vec);
    }
    vector<V> P1;
    vector<V> P2;
    vector<V> P3;
    vector<V> P4;
    vector<V> small = {{1, 2}, {3, 4}};
    for (int i = 0; i < N; i++)
    {
        vector<int> temp1;
        vector<int> temp2;
        vector<int> temp3;
        vector<int> temp4;
        for (int j = 0; j < M; j++)
        {
            if (j < M / 2 && i < N / 2)
            {
                temp1.push_back(arr[i][j]);
            }
            if (j >= M / 2 && i < N / 2)
            {
                temp2.push_back(arr[i][j]);
            }
            if (j >= M / 2 && i >= N / 2)
            {
                temp3.push_back(arr[i][j]);
            }
            if (j < M / 2 && i >= N / 2)
            {
                temp4.push_back(arr[i][j]);
            }
        }
        P1.push_back(temp1);
        P2.push_back(temp2);
        P3.push_back(temp3);
        P4.push_back(temp4);
    }

    for (int i = 0; i < R; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
            operation1(small);
        else if (a == 2)
            operation2(small);
        else if (a == 3)
            operation3(small);
        else if (a == 4)
            operation4(small);
        else if (a == 5)
            operation5(small);
        else
            operation6(small);
    }
    vector<V> L[4];
    int cnt = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int idx = small[i][j];
            if (idx == 1)
            {
                L[cnt] = P1;
            }
            else if (idx == 2)
            {
                L[cnt] = P2;
            }
            else if (idx == 3)
            {
                L[cnt] = P3;
            }
            else
            {
                L[cnt] = P4;
            }
            cnt++;
        }
    }
    for (int i = 0; i < L[0].size() + L[1].size(); i++)
    {
        }
    return 0;
}
