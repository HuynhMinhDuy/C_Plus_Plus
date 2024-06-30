#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {	
	
	cout << "Start " << endl;
	
	vector<int> nums = { 4, 3, 45, 6 , 89};


	// Increase order
	sort(nums.begin(), nums.end());

	for (int& num : nums) {
		cout << num << " ";
	}

	cout << endl;

	// Decrease order
	sort(nums.begin(), nums.end(), greater<int>());

	for (int& num : nums) {
		cout << num << " ";
	}
		
	cout << "\nDone";

	return EXIT_SUCCESS;	
}
