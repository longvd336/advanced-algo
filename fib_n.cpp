#include <bits/stdc++.h>

using namespace std;

struct Matrix {
	long long f[2][2];
};

int mod = 1e9 + 7;

// luy thua ma tran su dung pp chia de tri tinh luy thua

Matrix operator* (Matrix A, Matrix B) {
	Matrix C;
	for(int i = 0; i <= 1; i++) {
		for(int j = 0; j <= 1; j++) {
			C.f[i][j] = 0;
			for(int k = 0; k <=1; k++) {
				C.f[i][j] = (C.f[i][j] + (A.f[i][k] * B.f[k][j]) % mod ) %mod;
			}
		}
	}
	return C;
}

Matrix powerMod(Matrix A, int n) {
	if(n == 1) return A;
	Matrix tmp = powerMod(A, n/2);
	if(n%2==0) return tmp * tmp;
	return A * tmp * tmp;
	
}

long long tinh(int n) {
	Matrix A;
	A.f[0][0] = 1; A.f[0][1] = 1; A.f[1][0] = 1; A.f[1][1] = 0;
	Matrix KQ = powerMod(A, n);
	return KQ.f[0][1];
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cout << tinh(n) << endl;
	}
	return 0;
}
