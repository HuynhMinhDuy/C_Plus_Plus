#include <iostream>
#include<vector>
#include <regex>
#include <string>
using namespace std;

int main() {
    cout << "Start \n" << endl;

    std::string str = "kindle-n";    
    //regex pattern("kindle-[a-z0-9].*", regex_constants::icase);
    //regex p("kindle-[a-z0-9].*");

    regex pattern("kindle-[a-z0-9].*", regex_constants::icase);
   
    if (regex_match(str, pattern)) {
        cout << "Matched " << endl;
    } else {
        cout << "Not Match" << endl;
    }
   
    cout << "\nDone " << endl;
    return EXIT_SUCCESS;
}

