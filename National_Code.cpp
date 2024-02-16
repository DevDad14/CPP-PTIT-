#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string ma;
		getline(cin,ma);
		size_t idx = ma.find("084");
		if(idx != string::npos){
			ma.erase(idx,3);
		}
		cout << ma << endl;
	}
}
