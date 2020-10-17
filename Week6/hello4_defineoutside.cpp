#include <iostream>

class HelloClass{
    public:
        void hello() const; 
};

void HelloClass::hello() const{
    std::cout << "Hello from hello()!" << "\n";
}

int main() {
    HelloClass myObj;
    myObj.hello();
}