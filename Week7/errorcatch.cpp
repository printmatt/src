#include <iostream>
#include <fstream>

int main() {
    char fileName[] = "data.txt";
    std::ifstream infile(fileName);

    try{
        if(infile) {
            std::cout << infile.rdbuf();
        } else {
            throw 404;
        }
    
    }
    catch (int myNum) {
        std::cerr << "Oh no! File not found.\n";
        std::cerr << "Error number: " << myNum;
        return 1;
    }
    return 0;
}