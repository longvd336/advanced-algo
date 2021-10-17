#include <iostream>

using namespace std;

void sinh(int arr[], int n) {
	arr[0] = 0;
	arr[1] = 1;
	if(n == 2) {
		cout << arr[0] << " " << arr[1];
		cout << "\n";
		cout << arr[1] << " " << arr[0];	
	}
	else{
		for (int i = 2; i < n; i++) {
			if(arr[i - 1] == 0) {
				arr[i] = 1;
			}
			else{
				arr[i] = 0;
			}
		}
		for(int j = 0; j < n; j++) {
			cout << arr[j] << " ";
		}
		cout << "\n";
		for(int k = 0; k < n; k++) {
			if(arr[k] == 0) {
				cout << 1 << " ";
			}
			else {
				cout << 0 << " ";
			}
		}
		cout << "\n";
	}
}

int main() {
	int n, test;
	cin >> n;
	int arr[1000];
	sinh(arr,n);
	return 0;
}
