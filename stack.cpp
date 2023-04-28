#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> st;

    // Push to stack
    st.push(21);
    st.push(22);
     
    // Pop stack    
    st.pop();
   
    // Loop throungh stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
