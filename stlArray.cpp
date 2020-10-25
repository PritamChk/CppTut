#include<iostream>
#include <array>
using namespace std;

int main(){
    array<int,5> Arr;
    Arr = {1,2,3,4,5};
    //Arr.fill(4);
    cout<<Arr.size()<<endl;
    cout<<Arr.at(2)<<endl;
    //next instruction and its output
    //cout<<Arr.at(7)<<endl;
     /*
    terminate called after throwing an instance of 'std::out_of_range'
    what():  array::at: __n (which is 7) >= _Nm (which is 5)
    Aborted (core dumped)
    */
   // Enhanced for loop
   cout<<"Enter the numbers: "<<endl;
   for(auto& i:Arr){
       cin>> i;
   }
   //printing the array
   cout<<"Your Array: "<<endl;
   for(auto& i:Arr){
       cout<<i<<endl;
   }
    return 0;
}