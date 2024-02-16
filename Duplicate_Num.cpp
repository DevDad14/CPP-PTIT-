#include <iostream>
using namespace std;

long long find_gcd (int n , int m){
    if(n == 0 || m == 0){
        return n + m;
    }
    else {
        while(n != m){
            if(n > m){
                n = n - m;
            }
            else {
                m = m - n;
            }
        }
        return n;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long a, x, y;
        cin >> a >> x >> y;
        long long gcd_xy = find_gcd(x, y);
        for (int i = 0; i < gcd_xy; ++i) {
            cout << a;
        }
        cout << endl;
    }

    return 0;
}

