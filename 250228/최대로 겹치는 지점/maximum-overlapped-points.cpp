#include <iostream>
#include <vector>

using namespace std;

int n, m = 0;
vector<int> a, b, res;

int main()
{
    cin >> n;
    a.resize(104);
    b.resize(104);
    res.resize(104);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = a[i]; j <= b[i]; j++)
        {
            ++res[j];
            if (m < res[j])
            {
                m = res[j];
            }
        }
    }
    cout << m << '\n';
}