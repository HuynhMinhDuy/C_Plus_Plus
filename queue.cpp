#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Push to q
    q.push(21);
    q.push(22);
    q.push(123);
     
    // Pop stack    
    q.pop();
    q.pop();

    cout << q.size() << endl;
   
    // Loop throungh stack
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}
