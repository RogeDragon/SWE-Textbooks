
/*
These are the different ways to intialise a string in Cpp:
- String s1, Intialised but not defined: Default intialisation
- String s2 = "value", Intialisation and defining it; Copy intilaisation
- String s3("value"), Direct Intilisiation
- String s4(c, "value"), Direct Intialisation with copies, copies "value" c times
*/

#include <string>
#include <iostream>

using std::cin, std::cout, std::endl;
using std::string;
using std::getline;

int main(){
    /*
    string word;
    while (cin >> word){
        cout << word << endl;
    }
    */
    
    string line;
    while (getline(cin, line)){
        if (!line.empty()){
            cout << line << endl;
            continue;
        }
        
        cout << "Must include a valid line to be printed out" << endl;
    }

    return 0;
}
