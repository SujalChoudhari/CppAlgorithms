#include <iostream>
using namespace std;

int main(){
    // initialize the array
    int array1[10] = {1,2,3,4,5,6,7,8,9,10};

    //transverse the array
    for (int i = 0; i < 10; i++){
        cout<<array1[i]<<" ";  //loop through every element and print it in the console
    }
    return 0;
}