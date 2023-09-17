#include <iostream>
#include <string>
#include <vector>
using namespace std;
int N;

int main()
{
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        vector<string> word;
        string s;
        getline(cin, s);

        string task = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {

                word.push_back(task);
                task = "";
            }
            else
            {
                task += s[i];
            }
        }
        word.push_back(task);
        for (int i = 2; i < word.size(); i++)
        {
            cout << word[i] << " ";
        }
        cout << word[0] << " ";
        cout << word[1] << endl;
    }
    return 0;
}