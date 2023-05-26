#include <iostream>
#include <deque>
using namespace std;
int N;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    deque<int> q;
    cin >> N;
    N++;
    while (N--)
    {
        string s;
        getline(cin, s);
        if (s.substr(0, 4) == "push")
        {
            q.push_back(stoi(s.substr(5, s.size())));
        }
        if (s.substr(0, 3) == "pop")
        {
            if (q.empty())
                cout << "-1"
                     << "\n";
            else
            {
                cout << q.front() << "\n";
                q.pop_front();
            }
        }
        if (s.substr(0, 4) == "size")
        {
            cout << q.size() << "\n";
        }
        if (s.substr(0, 5) == "empty")
        {
            cout << q.empty() << "\n";
        }
        if (s.substr(0, 5) == "front")
        {
            if (q.empty())
                cout << "-1"
                     << "\n";
            else
                cout << q.front() << "\n";
        }
        if (s.substr(0, 4) == "back")
        {
            if (q.empty())
                cout << "-1"
                     << "\n";
            else
                cout << q.back() << "\n";
        }
    }
    return 0;
}