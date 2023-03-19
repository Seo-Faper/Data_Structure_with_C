#include <iostream>
#include <vector>
using namespace std;

bool rangeCheck(int x, int y)
{
    if (x < 1 || y < 1 || x > 8 || y > 8)
        return false;
    return true;
}
bool SamePosition(int kx, int ky, int sx, int sy)
{
    if (kx == sx && ky == sy)
        return true;
    return false;
}
int main()
{
    /*
    킹을 움직이고자 하는 좌표에 돌이 있을 경우 해당 돌의 좌표도 같이 이동 (단, 킹이나 돌이 범위를 벗어날 경우 해당 명령 수행 X)
    1. 킹을 움직이고자 하는 범위가 유효한가? (rangeCheck)
    2. 움직인 좌표가 돌의 좌표인가? (SamePostion)
    3. 돌을 움직였을 때 범위가 유효한가? (rangeCheck)
    */
    string king;
    string stone;
    int n;
    cin >> king >> stone >> n;
    int kx, ky, sx, sy;
    kx = king[0] - 'A' + 1;
    ky = king[1] - '0';
    sx = stone[0] - 'A' + 1;
    sy = stone[1] - '0';

    string c;
    for (int i = 0; i < n; i++)
    {

        cin >> c;

        if (c == "R" && rangeCheck(kx + 1, ky))
        {
            kx++;
            if (SamePosition(kx, ky, sx, sy))
            {
                if (rangeCheck(sx + 1, sy))
                {
                    sx++;
                }
                else
                {
                    kx--;
                }
            }
        }
        else if (c == "L" && rangeCheck(kx - 1, ky))
        {
            kx--;
            if (SamePosition(kx, ky, sx, sy))
            {
                if (rangeCheck(sx - 1, sy))
                {
                    sx--;
                }
                else
                {
                    kx++;
                }
            }
        }
        else if (c == "B" && rangeCheck(kx, ky - 1))
        {
            ky--;
            if (SamePosition(kx, ky, sx, sy))
            {
                if (rangeCheck(sx, sy - 1))
                {
                    sy--;
                }
                else
                {
                    ky++;
                }
            }
        }
        else if (c == "T" && rangeCheck(kx, ky + 1))
        {
            ky++;
            if (SamePosition(kx, ky, sx, sy))
            {
                if (rangeCheck(sx, sy + 1))
                {
                    sy++;
                }
                else
                {
                    ky--;
                }
            }
        }
        else if (c == "RT" && rangeCheck(kx + 1, ky + 1))
        {
            kx++;
            ky++;
            if (SamePosition(kx, ky, sx, sy))
            {
                if (rangeCheck(sx + 1, sy + 1))
                {
                    sx++;
                    sy++;
                }
                else
                {
                    kx--;
                    ky--;
                }
            }
        }
        else if (c == "LT" && rangeCheck(kx - 1, ky + 1))
        {
            kx--;
            ky++;
            if (SamePosition(kx, ky, sx, sy))
            {
                if (rangeCheck(sx - 1, sy + 1))
                {
                    sx--;
                    sy++;
                }
                else
                {
                    kx++;
                    ky--;
                }
            }
        }
        else if (c == "RB" && rangeCheck(kx + 1, ky - 1))
        {
            kx++;
            ky--;
            if (SamePosition(kx, ky, sx, sy))
            {
                if (rangeCheck(sx + 1, sy - 1))
                {
                    sx++;
                    sy--;
                }
                else
                {
                    kx--;
                    ky++;
                }
            }
        }
        else if (c == "LB" && rangeCheck(kx - 1, ky - 1))
        {
            kx--;
            ky--;
            if (SamePosition(kx, ky, sx, sy))
            {
                if (rangeCheck(sx - 1, sy - 1))
                {
                    sx--;
                    sy--;
                }
                else
                {
                    kx++;
                    ky++;
                }
            }
        }
    }
    cout << (char)('A' + (kx - 1)) << ky << endl;
    cout << (char)('A' + (sx - 1)) << sy << endl;
    return 0;
}
