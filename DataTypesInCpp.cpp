#include<iostream>
using namespace std;

int main(){
    //Data Types
    /*
        Basic Data Types
        BOOL
        CHAR
        INT
        FLOAT
        DOUBLE
        VOID
    */
    bool booleanVal = true; //declaration and definition
    char singleChar = 'H';  //declaration and definition
    int valInt = 200;       //declaration and definition
    float Fraction = 6.03;  //declaration and definition
    double lombaFraction = 9.00007; //declaration and definition
    
    //Print Statements for each data type
    cout<<"Bool VAl: "<<booleanVal<<" => TRUE and sizeof bool = "<<sizeof(bool)<<" Byte(s)"<<endl; // here () are necessary, when using datatype name as parameter to it.
    
    cout<<"Char VAl: "<<singleChar<<" and sizeof Char = "<<sizeof singleChar<<" Byte(s)"<<endl; // see that we can write sizeof in two ways
    
    cout<<"INT VAl: "<<valInt<<" and sizeof Int = "<<sizeof(int)<<" Byte(s)"<<endl; 
    
    cout<<"Float VAl: "<<Fraction<<" and sizeof Float = "<<sizeof(int)<<" Byte(s)"<<endl; 

    cout<<"Double VAl: "<<lombaFraction<<" and sizeof Double = "<<sizeof(int)<<" Byte(s)"<<endl; 
    //end of print statements
    //Declaration can be done in any place in C++
    //Now comes example of modifiers
    short var_1 = 65600; /*
        $ g++ DataTypesInCpp.cpp 
        DataTypesInCpp.cpp: In function ‘int main()’:
        DataTypesInCpp.cpp:34:19: warning: overflow in conversion from ‘int’ to ‘short int’ changes value from ‘65600’ to ‘64’ [-Woverflow]
        34 |     short var_1 = 65600;
           |   
    */
    cout<<endl<<"var 1 =  "<<var_1<<" Size of var 1: "<<sizeof var_1<<" Bytes"<<endl; 
     //Output : var 1 =  64 Size of var 1: 2 Bytes
    return 0;
}