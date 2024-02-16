#include<iostream>
#include<math.h>
using namespace std;
int is_perfect(int n){
	int SQRT = sqrt(n);
	return SQRT * SQRT == n;
}
int is_fibo(int n){
	return (is_perfect(5*n*n+4) || is_perfect(5*n*n-4));
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		for(int i = 0 ; i < n ; i++){
			if(is_fibo(a[i])){
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
}
