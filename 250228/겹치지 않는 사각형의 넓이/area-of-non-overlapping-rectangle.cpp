#include <iostream>

#define y1 Y1

using namespace std;

const int offset = 2000;
int x1, y1, x2, y2, res = 0;
int arr[offset + 4][offset + 4];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = y1; j < y2; j++)
        {
            for (int k = x1; k < x2; k++)
            {
                arr[j][k] = 1;
            }
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;

    for (int j = y1; j < y2; j++)
    {
        for (int k = x1; k < x2; k++)
        {
            arr[j][k] = 0;
        }
    }

    for (int j = 0; j < offset + 4; j++)
    {
        for (int k = 0; k < offset + 4; k++)
        {
            if (arr[j][k] ==  1)
            {
                res++;
            }
        }
    }

    cout << res << ' ';
}