/*
	Name: Num.CPP
	Copyright: (C) 2021
	Author: DevC
	Date: 12/10/21 20:06
	Description:
	S1. Encapsulate
	S2. Clean Room
	S3. Atoms (divide and conquer)
	S4. View
	S5. Test All
	S6. tong quat hoa de hon cu the
	S7. 3I: Improve, improve and Improve again
	S8. Nhan xet ket qua => 3I
	S9. Math
	S10. Van dung tinh doi xung
*/

#include <iostream>

using namespace std;

// long => 4 bytes 
// long long => 8 bytes

typedef long long Long;

string DIGIT = "0123456789";
string ALPHA = "abcdefghiklmnopqrstuwvxyz";
string DIGALPHA = DIGIT + ALPHA;

/*------------------------------------
Reverse an integer 1234 -> 4321, 2000, ...
[1][2][3][4] => [4][3][2][1]
Chat tung chu so: lay chu so hang don vi => x % 10 don vi
x = x / 10

--------------------------------------*/

Long Rev(Long x, int base = 10) {
	Long y = 0;
	while (x) {
		y = y*base + (x % base);
		x = x / base;
	}
	return y;
}

/*------------------------------------
Palindrome => So ganh / so doi xung /so can
1001, 12321
Pal(x) x is Pal ?
1->200 => cout pal number
--------------------------------------*/

// Co bao nhieu so Pal trong 1-> 1M
bool Pal(Long x) {
	return Rev(x) == x;
}

/*------------------------------------
Bi-Palindrome 10 and binary

1
33 1000001
--------------------------------------*/

bool BiPal(Long x, int b1, int b2) {
	if (Rev(x,b1) == x) { // ktra he 10 trc vi so ngan hon
		return Rev(x,b2) == x;
	}
	return false;
}

string IntToStr(Long x,int base = 10) {
	string s = "";
	if(x == 0) return "0";
	while (x) {
		s += DIGALPHA[x % base];
		x /= base;
	}
	return s;
}

// int chi 18 chu so => >18 chu so su dung long long

/*------------------------------------
Liet ke cac so doi xung 5 chu so trong he 10
27372

Note: abxba, x = 0...9
Tinh Nham: ab = 10..99: 90 so , x tu 0-9
=> co ab*x = 900 so
--------------------------------------*/
// dumb
int Pal5a() {
	int c;
	for (int x = 10000; x <= 99999; ++x) {
		if(Pal(x)) {
			cout << "\n" << x;
			++c;
		}
	}
	cout << "\n Total: " << c;
	
}

// clever

int Pal5b() {
	int c = 0;
	int z;
	for (int a = 1; a <= 9; ++a) {
		for(int b = 0; b <= 9; ++b) {
			for (int x = 0; x <= 9; ++x) {
				// z = abxba
				cout << "\n" << (a*10+b)*1000 + (x*100 + (b*10 + a));
				++c;
			}
		}
	}
	cout << "\n Total: " << c;
	
}

// test all 
void Test (Long a, Long b) {
	int c = 0;
	for (Long x  = a; x <= b; ++x) {
		if (BiPal(x, 10, 16))
		{
			cout << "\n " << x << " " << IntToStr(x,16);
			++c;
		}
	}
	cout << "\n Total; "<< c ;
}
// How to reverse from base(16) => (10)

void TestRev(int a, int b) {
	int y, z, error = 0;
	for (int x = a; x <= b; ++x) {
		y = Rev(x);
		z = Rev(y);
		if(x != z) {
			cout << "\n Error";
			error++;
		}
	}
	cout << "\n Total:" << error <<"erro(s)";
}

//StrToInt
// IntToRome: 2948 -> "MMCMXLVIII"
// RomeToInt:

main() {
//	Test(11, 1000000); // nguyen ly 1-1 
//	Pal5a();
//	Pal5b();
	TestRev(11, 1000000);
	cout << endl << "The end";
	return 0;
}
