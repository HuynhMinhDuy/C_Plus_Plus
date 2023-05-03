#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> empty_set; // defining an empty set
	set<int> s1 = { 6, 10, 5, 1 }; // defining a set with values

	set<int> s2;
	s2.insert(12);
	s2.insert(9);
	s2.insert(15);

	for (int v : s2) {
		cout << v << " ";
	}

	//Set Sorted in Descending Order
	set<int, greater<int> > sorted_set;
	sorted_set.insert(10);
	sorted_set.insert(5);
	sorted_set.insert(12);
	sorted_set.insert(4);

	cout << endl; 
	for (int  i : sorted_set) {
		cout << i << ' '; // 12 10 5 4
	}

	// printing sorted_set
	set<int, greater<int> >::iterator itr;
	cout << "\nThe set sorted_set is : \n";
	for (itr = sorted_set.begin(); itr != sorted_set.end(); itr++) {
		cout << *itr << " ";
	}

	// remove element with value 10 in sorted_set
	sorted_set.erase(10);
	cout << endl;
	for (int i : sorted_set) {
		cout << i << ' '; // 12 5 4
	}

	// Printing the size of sorted_set
	cout << "\n sorted_set size: " << sorted_set.size(); // 3

	 // checking if set is empty
	if (!sorted_set.empty()) {
		cout << "\n True";
	}
		
	// Find val in set
	if (sorted_set.find(5) != sorted_set.end()) {
		cout << "\nFound " << endl;
	}else {
		cout << "\nNot found " << endl;
	}
	
	return 0;
}
