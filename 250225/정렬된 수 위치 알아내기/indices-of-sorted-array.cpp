#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, a;
vector<pair<int, int>> v;
vector<int> res;

int main()
{
    cin >> n;
    res.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back({a, i});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        res[v[i].second] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << ' ';
    }

    return 0;
}
