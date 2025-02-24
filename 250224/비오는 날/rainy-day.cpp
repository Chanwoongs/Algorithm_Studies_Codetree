#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n;
string date[100], day[100], weather[100];
vector<pair<int, int>> v;

vector<string> split(const string& input, string delimiter) {
    vector<string> result;
    int start = 0;
    int end = input.find(delimiter, start); 

    while (end != string::npos) {
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start); 
    }

    result.push_back(input.substr(start));
    return result;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> date[i] >> day[i] >> weather[i];
    }

    for (int i = 0; i < n; i++) 
    {
        if (weather[i] != "Rain") continue;

        vector<string> sv = split(date[i], "-");
        string temp;
        for (auto s : sv) temp += s;
        v.push_back({stoi(temp), i});
    }

    sort(v.begin(), v.end());

    int idx = v[0].second;
    cout << date[idx] << " " << day[idx] << " " << weather[idx] << endl;

    return 0;
}