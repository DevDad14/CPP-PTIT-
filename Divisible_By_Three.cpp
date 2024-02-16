#include <iostream>
#include <cmath>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}


long long lcm(long long a, long long b, long long c) {
    return lcm(a, lcm(b, c));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long X, Y, Z, N;
        cin >> X >> Y >> Z >> N;
        
        long long LCM = lcm(X, Y, Z);
        
        long long start = pow(10LL, N - 1); 
        long long first_multiple = (start + LCM - 1) / LCM * LCM;

        if (first_multiple < pow(10LL, N)) {
            cout << first_multiple << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}

