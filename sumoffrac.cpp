#include<iostream>
using namespace std;

long long factorial(int n){
	long long  res = 1;
	for(int i=2 ; i<=n; i++){
		res*=i;
	}
	return res;
}
	
int main() {
	
    int n;
    cin >> n;

    long long sum = 1;

    for(int i = 2; i <= n; i++) {
       sum += factorial(i);
    }

    cout << sum << endl;

    return 0;
}

