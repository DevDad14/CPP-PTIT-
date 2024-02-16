#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	
    char lowercase, uppercase,lowercase2;
    cin >> lowercase;
    if (lowercase >= 'a' && lowercase <= 'z') {
        uppercase = lowercase - 32;
        cout << uppercase << endl;
    } else {
        lowercase2 = lowercase + 32;
        cout << lowercase2 << endl;
    }
}
    return 0;
}

