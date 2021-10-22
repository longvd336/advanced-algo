#include <bits/stdc++.h>

using namespace std;

int A[1000000];

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		for(int i = 0; i < n; i++) cin >> A[i];
		
		priority_queue<int, vector<int>, greater<int> > pq(A, A + n);
		
		long long cost = 0;
		while(pq.size() > 1) {
			int value1 = pq.top();
			pq.pop();
			int value2 = pq.top();
			pq.pop();
			cost +=  value1 + value2;
			pq.push(value1 + value2);
		}
		cout << cost << endl;
	}
}
