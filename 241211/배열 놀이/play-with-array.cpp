#include <iostream>
#include <vector>
using namespace std;

int main() {
    int v[104];
    int n, q;

    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        v[i] = num;
    }

    for (int i = 0; i < q; i++)
    {
        int num, a, b;

        cin >> num;

        if (num == 1 || num == 2)
        {
            cin >> a;

            if (num == 1)
            {
                cout << v[a] << '\n';
            }
            else
            {
                bool flag = false;
                for (int j = 1; j <= n; j++)
                {
                    if (v[j] == a)
                    {
                        cout << j << '\n';
                        flag = true;
                        break;
                    }
                }
                if (!flag) cout << 0 << '\n';
            }
        }
        else
        {
            cin >> a >> b;

            for (int j = a; j <= b; j++)
            {
                cout << v[j] << ' ';
            }
            cout << '\n';
        }   
    }

    return 0;
}