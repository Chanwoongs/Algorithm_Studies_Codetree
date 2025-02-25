#include <iostream>
#include <stack>

using namespace std;

int N, B;
stack<int> s;

int main() {
    cin >> N >> B;

    while (N > 0)
    {
        if (N % B == 0)
        {
            s.push(0);
        }
        else
        {
            s.push(N % B);
        }

        N /= B;
    }

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}