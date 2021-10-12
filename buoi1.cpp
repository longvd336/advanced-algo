#include <iostream>

using namespace std;

//Noi chuan bi cac mon an

// all func like a box and they isolate 
int Com(int gao, float nuoc) {
	cout << "\nCom";
}

int Pho(int thit, int banh) {
	cout << "\nPho";
}

void Mam() {
	Com(2,3);
	Pho(1,3);
}

main() {
	Mam();
	cout << endl << "\n The End \n";
	return 0;
}
