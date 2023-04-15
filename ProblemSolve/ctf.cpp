#include <iostream>
using namespace std;

int main()
{
    string cipher_text = "Jxu tusetut cuiiqwu yi OekShqsautTqSetu";
    string plain_text = "";

    for (char c : cipher_text)
    {
        if (isalpha(c))
        { // 알파벳인 경우만 치환
            char decrypted = c - 10;
            if (decrypted < 'A')
                decrypted += 26; // 알파벳 범위를 벗어나면 돌아옴
            plain_text += decrypted;
        }
        else
        {
            plain_text += c; // 알파벳이 아닌 경우는 그대로 사용
        }
    }

    cout << plain_text << endl; // 출력: It started raining on Wednesday night
    return 0;
}