#include<iostream>
#include <array>
using namespace std;


/**
 * Sum numbers in a vector.
 *
 * @param values Container whose values are summed.
 * @return sum of `values`, or 0.0 if `values` is empty.
 *
 * @exceptsafe This function does not throw exceptions.
 */
double add(std::vector<double> const & values){}

/**
 * Sum numbers in an array.
 *
 * @overload
 */
double add(double[] const values, size_t nValues){}

/**
 * Ai function ta add kore 2 to number ke, er cheye besi kichu bolar nei
 * @param[in] a a is the left oparand
 * @param[out] b b is the right oparand
 * @return (a+b) it returns the added result of a with b
 * 
 * @see cos()
 * sin()
 * ban2()
*/
int add(int a,int b){
    ///<result stores a+b
    int result = a+b; 
    return (a+b);
}

int main(){
    array<int,5> Arr;
    Arr = {1,2,3,4,5};
    //Arr.fill(4);
    add(9,2);
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