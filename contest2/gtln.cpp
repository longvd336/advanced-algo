#include <iostream>

using namespace std;

int main() {
	long sum = 0;
	long n;
	cin >> n;
	long arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++) {
		if(arr[i] >= 0) {
			sum += arr[i];
		}
	}
	long long a = sum*2;
	cout << a << endl;

	return 0;
}
