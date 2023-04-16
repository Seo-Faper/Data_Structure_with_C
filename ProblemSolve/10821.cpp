#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
vector<string> split(string str, char delimiter);
int main()
{
    string s;
    cin >> s;
    vector<string> result = split(s, ',');
    cout << result.size() << endl;
    return 0;
}
vector<string> split(string input, char delimiter)
{
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter))
    {
        answer.push_back(temp);
    }

    return answer;
}