#include <iostream>
#include <vector>

using namespace std;

int num, res = 0;
char c;
int n;
vector<int> v;
vector<pair<int, char>> com;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    v.resize(3000);
    com.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> num >> c;
        com[i].first = num;
        com[i].second = c;
    }

    int pos = 1500;
    for (int i = 0; i < com.size(); i++)
    {
        int move = com[i].first;

        if (com[i].second == 'R')
        {
            for (int j = pos + 1; j <= pos + move; j++)
            {
                v[j]++;
            }
            pos += move;
        }
        else
        {
            for (int j = pos - 1; j >= pos - move; j--)
            {
                v[j]++;
            }
            pos -= move;
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