#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int arr[100];
vector<int> v;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        v.push_back(arr[i]);

        sort(v.begin(), v.end());
        
        if (i == 0 || i % 2 == 0)
        {
            cout << v[v.size() / 2] << ' ';
        }
    }

    return 0;
}