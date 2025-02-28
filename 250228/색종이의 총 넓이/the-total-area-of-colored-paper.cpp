#include <iostream>

using namespace std;

const int offset = 100;
int N, res = 0;
int x[100], y[100];
int arr[204][204];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        cin >> x[i] >> y[i];

        for (int j = y[i] + offset; j < y[i] + offset + 8; j++)
        {
            for (int k = x[i] + offset; k < x[i] + offset + 8; k++)
            {
                arr[j][k]++;
            }
        }
    }

    for (int j = 0; j < 204; j++)
    {
        for (int k = 0; k < 204; k++)
        {
            if (arr[j][k])
            {
                res++;
            }
        }
    }

    cout << res << '\n';

    return 0;
}