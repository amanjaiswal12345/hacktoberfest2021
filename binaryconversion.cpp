  #include <iostream>
     using std::cout;
     using std::cin;
     using std::endl;


    #include "binaryconversion.h"

    int main()
    {
    ///*********************************Testing BinaryConversion                     Class************************************************/
    cout<<"Creating BinaryConversion object\n\n\n";
    BinaryConversion binary;
    cout<<"Binary value 111 to decimal = 3\n";//7
    cout<<"Actual function result: " << binary.binaryToDecimal(111);
    cout<<"Binary value 101001 to decimal = 41\n";
    cout<<"Actual function result: " << binary.binaryToDecimal(101001);
    cout<<"Binary value 11100 to decimal = 28\n";
    cout<<"Actual function result: " << binary.binaryToDecimal(11100);

   return 0;
   }
