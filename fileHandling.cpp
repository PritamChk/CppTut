#include<iostream>
#include<fstream> //to handle files 
#define DEBUG 
/*
#ifdef DEBUG
#endif
*/

//---------------------INPUT/OUTPUT------------
using namespace std;

#ifndef print
#define print cout
#endif

#ifndef scan
#define scan cin
#endif

#ifndef newline
#define newline std::endl
#endif

#define MAX_ARR_SIZE 100

//___________________End of I/O_____________________

int main(){
    
    char Line[MAX_ARR_SIZE];
    print<<"Enter your name and age: "<<newline;
    scan.getline(Line,MAX_ARR_SIZE); //we are taking name and age from the user
    
    //________CREAT FILE with a FILE Name: testFile.txt___________
    ofstream myFile("testFile.txt");

    //myFile.open("testFile.txt","w");
    myFile<<Line;
    myFile.close();

    return 0;
}
//_____________________End of Main________________