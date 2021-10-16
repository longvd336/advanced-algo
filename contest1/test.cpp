#include <iostream>
#include <math.h>
using namespace std;
 
int countPairs(int a[], int n, int k)
{
    int res = 0;
    for (int i = 0; i < n; i++)
      for (int j=i+1; j<n; j++)
         if (abs(a[j] - a[i]) < k)
            res++;
    return res;
}

int main()
{
	int t;
	cin >> t;
	while (t) {
		int n,k;
		cin >> n;
		int a[n];
		cin >> k;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
    	cout << countPairs(a, n, k);
    	cout << "\n"
    	t--;
	}
    return 0;
}
