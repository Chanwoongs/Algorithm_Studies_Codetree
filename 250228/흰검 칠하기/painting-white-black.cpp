#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int offset = 100000;
int n, num, w = 0, b = 0, g = 0;
int white[200000], black[200000], last[200000];
char c;

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
                black[j]++;
                last[j] = 1;
            }

            cur = dest;
        }
        else
        {
            int dest = cur - num + 1;

            for (int j = cur; j >= dest; j--)
            {
                white[j]++;
                last[j] = 2;
            }

            cur = dest;
        }
    }

    for (int i = 0; i < 200000; i++)
    {
        int wCnt = white[i];
        int bCnt = black[i];

        if (wCnt >= 2 && bCnt >= 2)
        {
            g++;
            continue;
        }
        
        if (last[i] == 1)
        {
            b++;
            continue;
        }
        else if (last[i] == 2)
        {
            w++;
            continue;
        }
    }

    cout << w << ' ' << b << ' ' << g << ' ';
}