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
    short var_1 = 256;
    cout<<endl<<"var 1 =  "<<var_1<<sizeof var_1<<endl; 
    
    return 0;
}