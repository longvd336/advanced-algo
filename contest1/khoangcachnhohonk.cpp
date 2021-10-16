#include <bits/stdc++.h>
using namespace std;
 
int countPairs(int a[], int n, int k)
{
    sort(a, a + n);
    int res = 0;
    for (int i = 0; i < n; i++) {

        int j = i+1;
        while (j < n && a[j] - a[i] < k) {
            res++;
            j++;
        }
    }
    return res;
}

int main()
{
	int test;
	cin >> test;
	while (test) {
		int n,k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
    	cout << countPairs(a, n, k) << endl;
    	test--;
	}
    return 0;
}
