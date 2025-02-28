#include <iostream>

using namespace std;

const int offset = 100000;
int n, num, b, w;
char c;

int tileColor[200000];

int main()
{
    cin >> n;

    int cur = offset;
    for (int i = 0; i < n; i++)
    {
        cin >> num >> c;

        if (c == 'R')
        {
            int dest = cur + num - 1;
            for (int j = cur; j <= dest; j++)
            {
                tileColor[j] = 1;
            }
            cur = dest;
        }
        else
        {
            int dest = cur - num + 1;
            for (int j = cur; j >= dest; j--)
            {
                tileColor[j] = 2;
            }
            cur = dest;
        }
    }

    for (int i = 0; i < 200000; i++)
    {
        if (tileColor[i] == 1)
        {
            b++;
            continue;
        }
        else if (tileColor[i] == 2)
        {
            w++;
            continue;
        }
    }

    cout << w << ' ' << b << '\n';
}