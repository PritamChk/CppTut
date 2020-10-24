#include<iostream>
#define print std::cout
//using namespace std;

char ch;
int x,y;

void func1();

int main(){
    std::cout<<"Hello world from main"<<std::endl;
    func1();
    print<<x<<std::endl;
    return 0;
}

void func1(){
    x = 123;
}
