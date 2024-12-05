#include <iostream>
using namespace std;

int main() {
    int a[104];
    a[0] = 2, a[1] = 3;

    for (int i = 2; i < 10; i++)
    {
        a[i] = a[i - 1] + (2 * a[i - 2]);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}