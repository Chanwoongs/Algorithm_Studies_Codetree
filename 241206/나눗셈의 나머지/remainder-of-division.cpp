#include <iostream>
using namespace std;

int main() {
    int arr[1004] = {0,};
    int a, b;

    cin >> a >> b;

    while (a > 1)
    {
        arr[a % b] += 1;
        a /= b;
    }

    int sum = 0;
    for (int i = 0; i <= 1000; i++)
    {
        sum += (arr[i] * arr[i]);
    }

    cout << sum << '\n';

    return 0;
}