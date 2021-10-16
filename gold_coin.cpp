#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;
typedef long long Long;

int a[1000] = {3, 10, 7, 20, 9, 12, 11, 6, 50, -1};
int n = 10;
/*

27 gold 26 chuan 1 nhe can 2 dia A B min

A9 > B9 C9
3	3 	3
1	1	1
54 2 can => 2 ng lam => 3 lan can
54000 coin => 2000 can <=> super computer => 
*/

// Tim max 1 mang nguyen


void Go() {
	cout << " ? ";
	fflush(stdin); //buffer free disk
	if (cin.get() == '.') exit(0);
	
}

int MaxVal(int a[], int d, int c) {
	int m = (d + c)/2;
	return (d==c) ? a[d]
			: max(MaxVal(a,d,m), MaxVal(a, m+1,c));
}

int MaxIndex(int a[], int d, int c) {
	if(d == c) return d;
	int m = (d + c) / 2;
	int i1 = MaxIndex(a, d, m);
	int i2 = MaxIndex(a, m+1, c);
	return (a[i1] > a[i2]) ? i1
			: i2;
}

void Print(int a[], int d, int c, const char * msg="") {
	cout << msg;
	for (int i = d; i <= c; ++i) {
		cout << " " << a[i];
	}
}

void Test() {
	int n1 = n - 1;
	for(int d = 0; d < n; ++d) {
		Print(a,d,n1, "\n a:");
		int id = MaxIndex(a, d, n1);
		int m = MaxVal(a, d, n1);
		cout << "\n Max Val =  " << m << " at: " << id;
		if(m != a[id]) cout << "ERROR";
		else cout << "CORRECT";
		Go();
	}
}



main() {
	Test();
	cout << endl << "\n The End\n";
	return 0;
}
