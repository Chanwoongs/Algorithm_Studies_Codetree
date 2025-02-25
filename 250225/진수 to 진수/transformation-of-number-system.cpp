#include <iostream>
#include <stack>

using namespace std;

int a, b;
string n;
stack<int> s;

int main() {
    cin >> a >> b;
    cin >> n;

    // Write your code here!
    int num = 0;
    for (int i = 0; i < n.size(); i++)
    {
        num = num * a + (n[i] - '0');
    }

    while (num > 0)
    {
        if (num % b == 0)
        {
            s.push(0);
        }
        else
        {
            s.push(num % b);
        }
        num /= b;
    }

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}