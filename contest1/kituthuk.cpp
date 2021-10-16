#include <bits/stdc++.h>

using namespace std;

int main() {
	string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int t;
	cin >> t;
	string NOW = "A";
	while(t > 0) {
		int n;
		cin >> n;
		int k;
		cin >> k;
		
		for(int i = 1; i < n; i++) {
			string S = NOW + ALPHABET[i] + NOW;
			NOW = S;
		}
		cout << NOW[k-1] << endl;
		NOW = "A";
		t--;
	}
	return 0;
}
