#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
    long long N,k;
    cin >> N >> k;

    long long S = 0;

    for(int i = 1; i <= N; i++) {
        S += i % k;
    }
    int result = (S == k) ? 1 : 0;

    cout << result << endl;
}
    return 0;
}
