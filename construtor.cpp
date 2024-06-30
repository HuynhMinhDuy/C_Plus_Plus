#include<iostream>
#include<map>
#include<stack>
#include<vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

template<typename T> 

T add(T a, T b) {
	return a + b;
}

struct Hal {
	Hal() : version{ 9000 } { 
		printf("I'm completely operational.\n");
	}
	~Hal() { 
		printf("Stop, Dave.\n");
	}
	const int version;
};

int main() {	
	
	cout << "Start \n" << endl;

	auto hal = new Hal{};  // Memory is allocated, then constructor is called
	delete hal;            // Destructor is called, then memory is deallocated

		
	cout << "\nDone";

	return EXIT_SUCCESS;	
}
