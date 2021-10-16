#include <stdio.h>
#include <stdio.h>
int n,a[100],f[100];
int data[100];

void inkq() {
	int i;
	for(i = 1; i<=n; i++) {
		printf("%d ",data[a[i]]);
	}
	printf("\n");
}

void Try(int i) {
	int j;
	for(j = 1; j <=n; j++) {
		if(f[j] == 0){
			a[i] = j;
			if(i == n){
				inkq();
			}
			else{
				f[j] = 1;
				Try(i+1);
				f[j] = 0;
			}
		}
	}
}
 
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void sort(int data[], int n) {
	for(int i = 1; i <= n; i++) {
		for(int j = i + 1; j <= n; j++) {
			if(data[i] > data[j]) {
				swap(data[i], data[j]);
			}
		}
	}	
}

int main() {
	scanf("%d",&n);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &data[i]);
	}
	sort(data, n);
	Try(1);
	return 0;
}
