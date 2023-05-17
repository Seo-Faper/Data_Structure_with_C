#include <iostream>
#include <vector>
#define V vector<int>
using namespace std;
int N, M, R;
vector<V> arr;
void printArray(const vector<V> &arr)
{
    for (const auto &row : arr)
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
    for (auto &row : arr)
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

int main()
{
    // Example array of size NxM
    cin >> N >> M >> R;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int a;
            cin >> a;
                }
    }

    // Apply operations R times
    operation6(arr);
    printArray(arr);

    return 0;
}
