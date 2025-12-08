#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int level = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= i + 1) {
            level = i + 1;
        } else {
            break;
        }
    }
    
    cout << level << endl;
    return 0;
}