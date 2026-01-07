
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

enum class Animal {
    pig,
    chicken,
    goat,
};

/*
std::string GetAnimalName(Animal animal){
    using enum Animal;

    switch (animal){
        case pig: return "pig";
        case chicken: return "chicken";
        case goat: return "goat";
        default: return "unknown";
    }

    return "unknown";
}
*/

struct fruit {
    int NumBites;
    int Size;

    std::string Name;

    fruit() { // This is the default constructor in c++
        NumBites = 0;
        Size = 100;
        Name = "Apple";

        std::cout << "Wow, Look at this massive fruit" << std::endl;
    }

    /*
    you can also define a default constructor like this:
    fruit() = default;
    defualt, just intialises all member variables to default
    */

    fruit(int NumBites, int Size, std::string Name) : NumBites(NumBites), Size(Size), Name(Name)  {}

    inline void EatFruit() {NumBites++;}
};

//messing about withoperator overloading
std::ostream& operator<< (std::ostream &out, fruit &Fruit){
        out << Fruit.Name;
        return out;
}

int main(){
    // for enums, you can intilaise them in 3 different ways
    Colour Apple{red};
    Colour Blueberry = blue;
    Colour Pear(green);

    //enums are great for switch statements, switch statements only take int values
    Colour value = red;

    std::cout << __cplusplus <<  std::endl;

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