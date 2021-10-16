#include <iostream>

using namespace std;


unsigned long long int gcd(unsigned long long a, unsigned long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

unsigned long long int lcm(unsigned long long a, unsigned long long b)
{
    return (a / gcd(a, b)) * b;
}

int main() {
	
	int test;
	cin >> test;
	while(test) {
		unsigned long long so1, so2;
		cin >> so1;
		cin >> so2;
		cout << lcm(so1, so2) << endl;
		test--;
	}
	return 0;
}
