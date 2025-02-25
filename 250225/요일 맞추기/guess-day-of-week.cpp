#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int m1, d1, m2, d2;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string dayString[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int GetTotalDays(int m, int d)
{
    int res = 0;
    for (int i = 1; i < m; i++)
    {
        res += days[i];
    }
    return res += d;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Write your code here!
    int a = GetTotalDays(m1, d1);
    int b = GetTotalDays(m2, d2);

    int diff = a - b;
    if (diff < 0) diff *= -1;

    cout << dayString[diff % 7];

    return 0;
}