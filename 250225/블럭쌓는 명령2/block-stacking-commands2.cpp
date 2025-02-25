#include <iostream>
#include <vector>

using namespace std;

int N, K, m = 0;
int A[100], B[100];
vector<int> v;

int main() {
    cin >> N >> K;
    v.resize(N + 1, 0); 

    for (int i = 0; i < K; i++) 
    {
        cin >> A[i] >> B[i];
    }

    for (int i = 0; i < K; i++)
    {
        for (int j = A[i]; j <= B[i]; j++)  
        {
            v[j]++;  

            if (m < v[j]) 
            {
                m = v[j];  
            }
        }
    }

    cout << m;  
    return 0;
}
