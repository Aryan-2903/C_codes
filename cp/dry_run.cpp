#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long int x) {
    long long int z = sqrt(x);
    return (z * z == x);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long int n;
        cin >> n;
        long long int a[n];

        long long int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (isPerfectSquare(sum)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
