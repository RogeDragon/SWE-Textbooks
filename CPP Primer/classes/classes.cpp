
/*
CLASS/STRUCT/ENUMS NOTES:

1) One Definition Rule (ODR): In any given project, there should
only be one definition of a class
2) It is usually best practice to put all functions in a header
file and import them in (#include).
3) It is best to use enums as error values in a function
*/


#include <iostream>
#include <string>

// this is how you make a unscoped enum c++
enum Colour { 
    red,
    blue, 
    green
};

struct fruit {
    int NumBites;
    int Size;

    fruit() { // This is the default constructor in c++
        NumBites = 0;
        Size = 100;
        std::cout << "Wow, Look at this massive fruit" << std::endl;
    }

    fruit(int NumBites, int Size) { // this is a constructor that you will find in any other langauge
        this->NumBites = NumBites;
        this->Size = Size;
    }

    inline void EatFruit() {NumBites++;}
};

int main(){

    // for enums, you can intilaise them in 3 different ways
    Colour Apple{red};
    Colour Blueberry = blue;
    Colour Pear(green);

    //enums are great for switch statements, switch statements only take int values
    Colour value = red;

    switch (value){
        case red:
        break;

        case blue:
        break;

        case green:
        break;
    }

    return 0;
}