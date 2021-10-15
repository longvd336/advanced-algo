/*
	Name: 
	Copyright: 
	Author: 
	Date: 15/10/21 19:33
	Description: 
*/

#include <iostream>
using namespace std;

typedef long long Long; //64bit
/*--------------------------------
n! = 1*2*3*4....n

0! = 1 -> 1! = 1

---------------------------------*/
//Normal Factorial
Long F(int n) { 
	if (n<0) return 0;
	if (n == 0) return 1;
	Long r = 1;
	for (int i = 1; i <= n; ++i) {
		r *= i;
	}
	return r;
}
// n! = n*(n-1)!
//Recursive Factorial

//RF(5) = 5*RF(4) = 5*4*RF(3) = 5*4*3*RF(2) = 5*4*3*2*RF(1) = 5*4*3*2*1*RF(0)
Long RF(int n) { 
	if (n < 0) return 0;
	if (n < 2) return 1;
	return RF(n-1) * n;
}

void TestF() {
	for (int x = -20; x <= 20; ++x) {
		cout << "\n" << x << " : " << F(x)
			<< " " << RF(x);
	}
}

/*---------------------------------------------

Fibonacci: 1 1 2 3 5 8 13 21 34 55 89 .....

Fib(0) = 1,
Fib(1) = 1,
Fib(n) = Fib(n-2) + Fib(n-1)

san duoi 
----------------------------------------------*/

Long Fib(int n) {
	Long a = 1, b = 1, c;
	if(n < 0) return 0;
	if(n < 2) return 1;
	for (int i = 2; i <= n; ++i) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
	
}

Long RFib(int n) {
	if(n < 0) return 0;
	if(n < 2) return 1;
	return RFib(n-2) + RFib(n-1);
}

void TestFib () {
	for (int x = 0; x <= 20; ++x) {
		cout << "\n" << x << " : " << Fib(x) << " " << RFib(x);
	}
}

// Height

int H(Long x, int base = 10) {
	int sum = 0;
	while(x) {
		sum += x % base;
		x /= base;
	}
	return sum;
}

// Chia het 3, 9

/* 
Height => giai bai toan
list cac so trong he dem 2 tu 10 -> 100000 co bao nhieu so chua dung 5 bit 1
*/


int Bitk(int a, int b, int k) {
	long c = 0;
	for (int x = a; x <= b; ++x) {
		if (H(x,2) == k) {
			++c;
			cout << "\n" << x;
		}
	}
	cout << "\n" << "Total:" << c;
	return c;
}


main() {
//	TestF();
//	TestFib();
	Bitk(100,10000,10);
	cout << endl << "\n The End \n";
	return 0;
}

/************************************************
	Lesson2, Oct 15 21, Fri

	Number, Greedy, Recursive + Divide and Conquer
	* Lam nhieu lan, khong lam duoc => bo (lam lai o lan 2)
	
	Recursive:
	* R(x) = R(y), y != x;
	1 ham de quy <=> 1 loop
	// Mot so bai tap tim Height (do cao cua 1 so = sum digits of x)

	- Devide and Conquer
	F(D): 
	1. Chia D thanh cac mien con D1|...|Dk
	2. Xong xu ly tung phan mot: F(Di)
	3. Tong hop ket qua
	
	
	

*************************************************/
