#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int c1, c2;
	cin >> c1 >> c2;
	int arr1[n];
	for(int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	int arr2[m];
	for(int i = 0; i < m; i++) {
		cin >> arr2[i];
	}
	
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + m);

	int count = 0;
	int result[m];
	int min = result[0];
	for(int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			result[j] = abs(arr1[i] - arr2[j]) + abs(c1-c2);
			if(min > result[j]) {
				min = result[j];
				count = 1;
			}
			else if (min == result[j]) {
				count += 1;
			}
		}
	}
	cout << min << " " << count << endl;
	
	return 0;
}
