#include <iostream>

class printData{
    public:
        void print(int i) {
            std::cout << "Printing int: " << i << std::endl;
        }

        void print(double f) {
            std::cout << "Printing float: " << f << std::endl;
        }
};

int main() {
    printData pd;
    printData *pp =&pd;
    pd.print(3);
    pp->print(4);
    pd.print(3.23434);   
    pp->print(4.345);
    return 0;
}