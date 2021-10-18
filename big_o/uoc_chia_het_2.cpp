#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long n;
		cin >> n;
		long count = 0;
		
		for(long i = 1; i <= sqrt(n) ; i++) {
			if(n % i == 0) {
				if(i % 2 == 0) {
					count++;
				}
				
				if((n/i) % 2 == 0) {
					count++;
				}
				
				if((i*i) == n && i%2 == 0) {
					count--;
				}
			}
		}
		
		cout << count << endl;
	}
	return 0;
}

