#include <iostream>
#include <stack>
#include <string>

using namespace std;

string n;

int main()
{
    cin >> n;

    int num = 0;
    for (int i = 0; i < n.size(); i++)
    {
        num = num * 2 + (n[i] - '0');
    }
    num *= 17;

    stack<int> s;
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            s.push(0);
        }
        else
        {
            s.push(1);
        }

        num /= 2;
    }

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}