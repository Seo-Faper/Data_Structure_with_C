#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define V vector<int>
using namespace std;
int N, M, R;
int commands[7];
vector<V>
    arr;
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
    for (int i = 0; i < R; i++)
    {
        int a;
        cin >> a;
        commands[a]++;
    }
    if (commands[1] % 2 != 0)
    {
        operation1(arr);
    }
    if (commands[2] % 2 != 0)
    {
        operation2(arr);
    }
    int p34 = abs(commands[3] - commands[4]);
    if (commands[3] > commands[4])
    {
        for (int i = 0; i < p34 % 4; i++)
        {
            operation3(arr);
        }
    }
    if (commands[3] < commands[4])
    {
        for (int i = 0; i < p34 % 4; i++)
        {
            operation4(arr);
        }
    }
    int p56 = abs(commands[5] - commands[6]);
    if (commands[5] > commands[6])
    {
        for (int i = 0; i < p56 % 4; i++)
        {
            operation5(arr);
        }
    }
    if (commands[5] < commands[6])
    {
        for (int i = 0; i < p56 % 4; i++)
        {
            operation6(arr);
        }
    }
    printArray(arr);

    return 0;
}
