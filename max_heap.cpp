#include <iostream>
#include <queue>
using namespace std;

int main() {

	priority_queue<int> pq;
	
	pq.push(3);
	pq.push(1);
	pq.push(7);

	cout << pq.top() << endl; // Output : 7

	pq.pop();

	cout << pq.top() << endl; // Output : 3


	cout << "size : " << pq.size() << endl; // Output : 2 

	while (!pq.empty()) {
		cout << " e : " << pq.top() << endl;
		pq.pop();
	}

	return 0;
}
