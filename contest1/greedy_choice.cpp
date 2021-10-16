#include <iostream>

using namespace std;

void find(int m, int s) 
{
	// m is number of digit
	// s is sum
	if (m == 0) {
		cout << "-1 -1";
		return ;
	}
	if (s == 0) 
	{
		if (m == 1) {
			cout << "-1 -1";
			return ;
		}
		cout << "-1 -1";
		return ;
	}	
	// Sum greater than the maximum possible sum
	if (s > 9*m) 
	{
		cout << "-1 -1";
		return ;	
	}
	// create an array to store all digit of result
	int res[m];
	int res2[m];
	int sum2 = s;
	// find min
	s -= 1;
	for (int i = m - 1; i > 0; i--) 
	{
		// if sum greater than 9, digit must be 9
		if (s > 9)
		{
			res[i] = 9;
			s -= 9;
		}
		else
		{
			res[i] = s;
			s = 0;
		}
	}
	res[0] = s + 1;
	
	// find max
	for (int i = m - 1; i > 0; i--) {
		if (sum2 > 9)
		{
			res2[i] = 9;
			sum2 -= 9;
		}
		else {
			res2[i] = sum2;
			sum2 = 0;
		}
	}
	res2[0] = sum2;
	
	for(int i = 0; i < m; i++) {
		cout << res[i];
	}
	cout << " ";
	for(int i = m - 1; i >= 0; i--) {
		cout << res2[i];
	}
	cout << "\n";
}


int main() {
	int m, s;
	cin >> m;
	cin >> s;
	find(m, s);
	return 0;
}
