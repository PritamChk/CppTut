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

/**
 * Person is class
 * it stores age of a person
 * age: integer
 * & it stores Name of the person
 * Name: String
**/
class Person{
    public:
    ///stores age of the person
    int age; 
    string name;
    bool operator < (const Person& rhs) const {return name< rhs.name;}
};

int main(){
    system("clear");
    /* Example 1
    set<int> mySet = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

    for(const auto& e: mySet){
        cout<< e << endl;
    }
     //nested comment->
     //output->
     //________________________
     // 1
     // 2
     // 3
     // 4
     // 5
     //_________________________
    */
    //Example: 2-A 
    // /*
    
    set<Person,std::less<>> personSet = {{21,"Siman"}, {22,"Pritam"}, {22,"Adrija"}, {20,"Sohham"}};
    for(const auto& e: personSet){
        cout<<"Age: " << e.age<<" Name: " << e.name << endl;
    }
    //output
    //_____________________________
    //error: no match for ‘operator<’ (operand types are ‘const Person’ and ‘const Person’)
    // 386 |       { return __x < __y; }
    //  |                ~~~~^~~~~
    //
    //_____________________________
    // */

    return 0;
}