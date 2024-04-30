#include <iostream>
using namespace std;

int main() {
    int firstValue;
    int SecondValue;
    
    int* pPointer = nullptr;

    //assign pointer with the address of firstValue
    pPointer = &firstValue;
    *pPointer = 10; //Indrection

    //assign pointer with the address of secondValue
    pPointer = &SecondValue;
    *pPointer = 20; //Indirection

    cout << "firstValue is " << firstValue << '\n';
    cout << "SecondValue is " << SecondValue << '\n';

    return 0;


}