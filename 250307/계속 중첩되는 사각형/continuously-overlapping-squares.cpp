#include <iostream>

#define y1 Y1

using namespace std;

int n, res = 0;
int x1[10], y1[10];
int x2[10], y2[10];
int map[300][300];
const int offset = 150;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += offset;
        y1[i] += offset;
        x2[i] += offset;
        y2[i] += offset;

        if (i % 2 == 0)
        {
            for (int j = y1[i]; j < y2[i]; j++)
            {
                for (int k = x1[i]; k < x2[i]; k++)
                {
                    map[j][k] = 1;
                }
            }
        }
        else
        {
            for (int j = y1[i]; j < y2[i]; j++)
            {
                for (int k = x1[i]; k < x2[i]; k++)
                {
                    map[j][k] = 2;
                }
            }
        }
    }

    for (int i = 0; i < 300; i++)
    {
        for (int j = 0; j < 300; j++)
        {
            if (map[i][j] == 2)
            {
                res++;
            }
        }
    }

    cout << res << '\n';

    return 0;
}