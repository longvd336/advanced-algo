#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long int ull;

ull function(ull n)
{
	ull maxPrime;
	while(n % 2==0)
	{
		maxPrime=2;
		n/=2;
	}
	for(ull i=3;i<=sqrt(n);i+=2)
	{ 
		while(n%i==0)
		{
			n/=i;
			maxPrime=i;
		}
	}
	if(n>1) {
		maxPrime=n;
	}
	return maxPrime;
}

int main()
{
	short t;
	ull n;
	cin>>t;
	while(t--)
	{ 
		cin>>n;
		cout<<function(n)<<endl;
	}
	return 0;
}
