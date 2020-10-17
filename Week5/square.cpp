#include <iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int &);

int main()
{
    //demonstrate squarebyvalue
    int x = 2;
    cout << "x = " << x << " before squareByValue\n";
    cout << "Value returned by squareByValue: "
        << squareByValue(x) << endl;
    cout << "x = " << x << " after squareByValue\n" << endl;

    //demonstrate squarebyreference
    int z = 4;
    cout << "z = " << z << " before squareByReference" << endl;
    squareByReference(z);
    cout << "z = " << z << " after squareByReference" << endl;
}

//result in number and returns the new value of number
int squareByValue(int number){
    return number*=number;
}

//in the variable to which numberRefe refers in function main
 void squareByReference (int &numberRef)
 {
     numberRef *= numberRef; //caller's argument modified
 }