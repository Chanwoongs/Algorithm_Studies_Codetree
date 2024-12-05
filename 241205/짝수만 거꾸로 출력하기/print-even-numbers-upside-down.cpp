#include <iostream>
using namespace std;

int main() {
    int n, a[104], cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (num % 2 == 0)
        {
            a[cnt++] = num;
        }
    }

    if (cnt == 0)
    {
        cout << '0' << '\n';
        return 0;
    }

    for (int i = cnt - 1; i >= 0; i--)
    {
        cout << a[i] << ' ';
    }

    return 0;
}