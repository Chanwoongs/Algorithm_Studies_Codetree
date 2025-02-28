#include <iostream>
#include <cstring>

using namespace std;

const int offset = 100;
int n, m = 0;;
int x1[100], x2[100], arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];

        x1[i] += offset;
        x2[i] += offset;
    }

    memset(arr, 100, sizeof(int));

    // Please write your code here.
    for (int i = 0; i < n; i++)
    {
        for (int j = x1[i]; j <= x2[i]; j++)
        {
            ++arr[j];
            if (m < arr[j])
            {
                m = arr[j];
            }
        }
    }

    cout << m << '\n';

    return 0;
}