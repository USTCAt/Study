#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    
    vector<int> d(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }
    vector<long long> backSum(n + 1, 0);  // backSum[b] = d[b] + ... + d[b+t-1]
    for (int b = 1; b <= n - t + 1; b++) {
        long long sum = 0;
        for (int k = 0; k < t; k++) {
            sum += d[b + k];
        }
        backSum[b] = sum;
    }
    vector<long long> minSuffix(n + 2, LLONG_MAX);
    for (int b = n - t + 1; b >= 1; b--) {
        minSuffix[b] = min(backSum[b], minSuffix[b + 1]);
    }
    
    long long minRain = LLONG_MAX;
    for (int a = 1; a <= n - 2 * t; a++) {
        long long goSum = 0;
        for (int k = 0; k < t; k++) {
            goSum += d[a + k];
        }
        int earliestBackStart = a + t + 1;
        if (earliestBackStart > n - t + 1) continue;
       
        long long minBack = minSuffix[earliestBackStart];
        
        long long total = goSum + minBack;
        if (total < minRain) {
            minRain = total;
        }
    }
    
    cout << minRain << endl;
    
    return 0;
}