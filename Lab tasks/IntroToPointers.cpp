# include <iostream>
using namespace std;

int main ()
{
    //declare pointerand initialise it so that it doesn't store a random address
    int*pPointer = nullptr;

    int integerVar = 5;

    // assign pointer to address of object
    pPointer = &integerVar;
    //output the value of integerVar
    cout<< "integerVar: "<< &integerVar <<endl;

    // output the address of the integerVar
    cout << "Address of integerVar: " << &integerVar << endl;
    
    // output the address assigned to pointer
    cout << "pPointer" << &pPointer << endl;

    // output the address of pPointer
    cout <<"Address of pPointer" << &pPointer << endl;

    return 0;
}