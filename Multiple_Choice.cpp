#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char de101[15];
        char de102[15];
        char dapan101[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
        char dapan102[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
        double diem = 10;
        if (n == 101) {
            for (int i = 0 ; i < 15 ; i++) {
                cin >> de101[i];
            }
            for (int i = 0 ; i < 15 ; i++) {
                if (de101[i] != dapan101[i]) {
                    diem -= 2.0 / 3.0;
                }
            }
            cout << fixed << setprecision(2) << diem << endl;
        } else if (n == 102) {
            for (int i = 0 ; i < 15 ; i++) {
                cin >> de102[i];
            }
            for (int i = 0 ; i < 15 ; i++) {
                if (de102[i] != dapan102[i]) {
                    diem -= 2.0 / 3.0;
                }
            }
            cout << fixed << setprecision(2) << diem << endl;
        }
    }
    return 0;
}

