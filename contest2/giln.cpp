#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateGrayarr(int n) {
	if(n < 0)
		return;
	
	vector<string> arr;
	
	arr.push_back("0");
	arr.push_back("1");
	
	int i, j;
	for(i = 2; i < (1<<n); i = i << 1) {
		for(j = i - 1; j >= 0; j--) {
			arr.push_back(arr[j]);
			cout << i << " ";
		}
		for(j = 0; j < i; j++) {
			arr[j] = "0" + arr[j];
		}
		for(j = i; j < 2*i; j++) {
			arr[j] = "1" + arr[j];
		}
	}
	for(i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main() {
	int n, test;
	cin >> test;
	while(test) {
		cin >> n;
		generateGrayarr(n);
		test--;
	}
	return 0;
}
