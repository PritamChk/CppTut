/*
CPP supports following preprocessors
-------------------------------------------------
#define     #elif       #else       #endif
#error      #if         #ifdef      #ifndef
#inclide    #line       #pragma     #undef
--------------------------------------------------
*/
#include<iostream>

//#define DEBUG //to on DEBUG FLAG use [g++ -D DEBUG preprocessors.cpp] from cmd
//else to on DEBUG uncomment previous line

#ifndef print
#define print std::cout
#endif

#ifndef scan
#define scan std::cin
#endif

#ifndef newline
#define newline std::endl
#endif


int main(void){
    print<<"Hello ifndef"<<newline;
    #ifdef DEBUG // this won't work if DEBUG isn't defined
        print<<"as DEBUG FLAG is on, so ifdef is working"<<newline;
    #endif    
    return 0;
}
