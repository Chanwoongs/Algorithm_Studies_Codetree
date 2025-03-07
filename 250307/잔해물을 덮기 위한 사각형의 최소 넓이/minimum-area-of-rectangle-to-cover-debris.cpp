#include <iostream>
#include <vector>
#include <algorithm>

#define y1 Y1

using namespace std;

int x1[2];
int x2[2];
int y1[2];
int y2[2];

const int offset = 1500;
int map[3000][3000];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += offset;
        x2[i] += offset;
        y1[i] += offset;
        y2[i] += offset;

        for (int j = y1[i]; j < y2[i]; j++)
        {
            for (int k = x1[i]; k < x2[i]; k++)
            {
                map[j][k] += i + 1;
            }
        }
    }

    int mxX = -1, mxY = -1, mnX = 99999999, mnY = 99999999;
    bool flag = false;
    for (int i = 0; i < 3000; i++)
    {
        for (int j = 0; j < 3000; j++)
        {
            if (map[i][j] == 1)
            {
                flag = true;

                mxX = max(mxX, j);
                mxY = max(mxY, i);
                mnX = min(mnX, j);
                mnY = min(mnY, i);
            }
        }
    }

    if (!flag)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << (mxX - mnX + 1) * (mxY - mnY + 1) << '\n';
    }
}