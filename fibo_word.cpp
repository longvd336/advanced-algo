#include <bits/stdc++.h>

using namespace std;

long long F[100];

char fiboWord(int n, long long k) {
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= F[n-2]) return fiboWord(n-2, k);
	return fiboWord(n-1, k - F[n-2]);
}


int main() {
	F[0] = 0;
	F[1] = 1;
	for(int i=2; i <= 92; i++) F[i] = F[i-1] + F[i-2];
	
	int t, n; long long k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		cout << fiboWord(n, k) << endl;
	}
	return 0;
}
