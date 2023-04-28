#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq;

    // Push front
    dq.push_front(123);

    // Push back
    dq.push_back(10);

    cout << "front : " <<  dq.front() << endl; // 123
    cout << "back : " << dq.back() << endl; // 10

    dq.push_front(20);
     
    // Pop front    
    dq.pop_front();

    // Pop back
    dq.pop_back();

    cout << "front : " << dq.front() << endl; // 123
    cout << "back : " << dq.back() << endl; // 123

    cout << dq.size() << endl;
   
    // Loop throungh dequeue
    while (!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_back();
    }
}
