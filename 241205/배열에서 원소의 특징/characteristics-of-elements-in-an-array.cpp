#include <iostream>
using namespace std;

int main() {
    int a[104];

    for (int i = 0; i < 10; i++)
    {
        int num;
        cin >> num;
        a[i] = num;

        if (num % 3 == 0)
        {
            cout << a[i - 1] << '\n';
            return 0;
        }
    }
    return 0;
}