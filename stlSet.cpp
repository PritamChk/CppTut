//TOPIC: std:: set<T>

//SYNTAX: std::set<T> onjName;

//1. std::set is an associative container that contains a sorted
// set of unique objects of type key.
//2. it is usually implemented usnig RED-BLACK tree.
//3. Insertion, Removal, Search have logarithmic time complexity.

//4. if we want to store user defined data type in set then we will have to
//   provide compare funtion so taht set can store them in sorted order.

//5. We can pass the order of sorting while constucting set object.

//BOTTOM LINE:
// It store unique elements and they are stored in sorted order (A/D)

#include<iostream>
#include<set>
#include<string>
#include<functional>

using namespace std;

int main(){
    set<int> mySet = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

    for(const auto& e: mySet){
        cout<< e << endl;
    }
    
    return 0;
}