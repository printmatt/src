#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main() {
    float a = 15,b=0;

    try {
        cout<<"Hi";
       div(15,0);
       cout << "HI";
    } catch (...) {
        std::cout << "Exception: "<<std::endl;
        return 1;
    }
    return 0;
}