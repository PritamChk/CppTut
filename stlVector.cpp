/*

vector properties:


*/

#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    system("clear");
    int j=1;
    //int n;
    //'=-cin>>n;
    vector<int> vect_1(15);
    cout<<"capacity"<<vect_1.capacity()<<endl;
    for(auto& i:vect_1){
        //cin>>i;
        cout<<"A["<<j++<<"] = "<<i<<endl;
    }
    vect_1.resize(10);
    cout<<"capacity"<<vect_1.capacity()<<endl;
    vect_1.reserve(20);
    cout<<"capacity"<<vect_1.capacity()<<endl;
    //cout<<"END of Vector : "<<vect_1.end();
    
    return 0;
}