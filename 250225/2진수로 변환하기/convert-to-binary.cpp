#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int n;
stack<int> s;

int main()
{
    cin >> n;

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            s.push(0);
        }
        else
        {
            s.push(1);
        }

        n /= 2;
    }

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}