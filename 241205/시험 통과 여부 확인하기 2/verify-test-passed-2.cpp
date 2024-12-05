#include <iostream>
using namespace std;

int main() {
    int score[4], n, res = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> score[i];
            sum += score[i];
        }
        if (sum / 4 >= 60)
        {
            cout << "pass" << '\n';
            res++;
        }
        else
        {
            cout << "fail" << '\n';
        }
    }
    cout << res << '\n';

    return 0;
}