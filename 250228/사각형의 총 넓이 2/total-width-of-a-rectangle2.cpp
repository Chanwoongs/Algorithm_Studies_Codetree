#include <iostream>

#define y1 Y1

using namespace std;

const int offset = 150;
int n, x1, y1, x2, y2, res = 0;
int rect[300][300];

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += offset;
        x2 += offset;
        y1 += offset;
        y2 += offset;

        for (int k = y1; k < y2; k++)
        {
            for (int j = x1; j < x2; j++)
            {
                if (rect[k][j] != 0)
                {
                    continue;
                }
                rect[k][j] = 1;
            }
        }
    }

    for (int i = 0; i < 300; i++)
    {
        for (int j = 0; j < 300; j++)
        {
            if (rect[i][j] == 1)
            {
                res += 1;
            }
        }
    }
    
    cout << res << '\n';
}