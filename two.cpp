#include<iostream>
#define newline std::endl
//#
//using namespace std;

extern char ch;
extern int x,y;

void func22();
void func23();

void func22(){
    std::cout<<"Hello world from func22()"<<newline;
    x = y/3;
}

void func23(){
    std::cout<<"From Function 23(File two.cpp)"<<newline;
    y = 69;
}
