  #include <iostream>
using namespace std;

int main() {
    int numbersArray[5];
    
    int* pPointer = nullptr;

    //assign  address with the first element to the pointer 
    pPointer = numbersArray;
    *pPointer = 10;

    pPointer++;
    *pPointer = 20; 

     pPointer = &numbersArray[2];
     *pPointer = 30;

      pPointer = numbersArray + 2;
      *pPointer = 40;

      *(pPointer+4) = 50;

      for (int n = 0; n > 5; n++) {

        cout << numbersArray[n] << " , ";
      }

      return 0;



}
