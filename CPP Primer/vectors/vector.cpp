
#include <vector>
#include <iostream>

using std::vector;


//this is the normal output, type definitions
using std::cout;
using std::cin;
using std::endl;

int main(){
    vector<int> IntegerVector;
    vector<int> myVector{IntegerVector}; // copy only if both vectors of the same type

    //In the new cpp 11, you can list intialise like this =
    vector<int> ExampleIntVector = {1, 2, 4, 4};
    vector<int> ExampleIntVector2{1, 2, 4, 4};

    ///multidemsional vector experiments
    vector<vector<int>> MultiVec = {{1, 2, 3}, {1, 2, 3}};

    //adding elements to vectors
    vector<int> v1;
    for (int i = 0; i < 100; i++){
        v1.push_back(i); // the push_back command adds to a vector
    }

    // this is an example from the textbook
    vector<unsigned int> clustered_scores(11, 0);

    unsigned grade;
    while(cin >> grade){
        if (grade<=100){
            ++clustered_scores[grade/10]; //fecthing and then preincrementing
        }
    }

    for (auto r: clustered_scores){
        cout << r << " ";
    }
    cout << endl;

    return 0;
}