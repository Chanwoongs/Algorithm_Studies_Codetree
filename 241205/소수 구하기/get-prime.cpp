#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 2) cout << 2 << ' ';
    if (n >= 3) cout << 3 << ' ';
    
    for (int i = 4; i <= n; i++)
    {
        bool flag = false;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = true;
            }
        }
        if (!flag)
        {
            cout << i << ' ';
        }
    }

    return 0;
}