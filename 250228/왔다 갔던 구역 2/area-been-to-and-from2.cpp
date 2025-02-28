#include <iostream>
#include <vector>

using namespace std;

int n, num, res = 0;
char c;
vector<int> v, x1, x2;

int main()
{
    cin >> n;

    v.resize(3000);
    x1.resize(3000);
    x2.resize(3000);

    int cur = 1500;
    for (int i = 0; i < n; i++)
    {
        cin >> num >> c;

        if (c == 'R')
        {
            int dest = cur + num;

            x1[i] = cur;
            x2[i] = dest;

            cur = dest;
        }
        else
        {
            int dest = cur - num;

            x1[i] = dest;
            x2[i] = cur;

            cur = dest;
        }       
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = x1[i]; j < x2[i]; j++)
        {
            v[j]++;
        }
    }

    for (auto& ele : v)
    {
        if (ele >= 2)
        {
            res++;
        }
    }

    cout << res << '\n';
}