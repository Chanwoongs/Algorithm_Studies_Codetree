#include <iostream>

#define y1 Y1

using namespace std;

const int offset = 1002;
const int mx = offset * 2;
int x1[2], y1[2];
int x2[2], y2[2];
int arr[mx][mx];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    // Please write your code here.
    for (int i = 0; i < 2; i++)
    {
        x1[i] += offset;
        y1[i] += offset;
        x2[i] += offset;
        y2[i] += offset;
    }

    for (int k = 0; k < 2; k++)
    {
        for (int i = y1[k]; i < y2[k]; i++)
        {
            for (int j = x1[k]; j < x2[k]; j++)
            {
                arr[i][j] += k + 1;
            }
        }
    }

    int minX = 9999, minY = 9999, maxX = -1, maxY = -1;
    for (int i = 0; i < mx; i++)
    {
        for (int j = 0; j < mx; j++)
        {
            if (arr[i][j] == 1)
            {
                if (minY > i)
                {
                    minY = i;
                }
                if (maxY < i)
                {
                    maxY = i;
                }

                if (minX > j)
                {
                    minX = j;
                }
                if (maxX < j)
                {
                    maxX = j;
                }
            }
        }
    }

    cout << (maxX - minX + 1) * (maxY - minY + 1) << '\n';

    return 0;
}