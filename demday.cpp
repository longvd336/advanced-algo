#include <bits/stdc++.h>

using namespace std;
int mod = 123456789;

long long powerM(int n, long long k) {
	if(k == 0) return 1;
	long long x = powerM(n, k/2);
	if(k%2 == 0) return (x%mod*x%mod) % mod;
	return n*(x*x%mod)%mod;
}

int main() {
	int t;
	long long n;
	cin >> t;
	while(t--) {
		cin >> n;
		cout << powerM(2, n - 1) << endl;
	}
	return 0;
}
