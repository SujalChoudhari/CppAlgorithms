#include <iostream>
using namespace std;


void add_element_at_end();
void add_element_in_between();

int main(){
    cout << "Made by Sujal Chouhdari"<<endl;
    // add_element_at_end();
    add_element_in_between();
    return 0;
}

void add_element_at_end(){
    int arr1[9] = {1,2,3,4,5,6,7,8,9}; //original array
    cout <<"Original Array: \n";
    for (int i = 0; i < 9; i++){
        cout<<arr1[i]<<" ";  //see the original array
    }
    int num = 10;
    cout <<"\nNumber to add at the end: "<<num<<endl;

    arr1[10] = num;

    cout <<"Changed Array: \n";
    for (int i = 0; i < 10; i++){
        cout<<arr1[i]<<" ";  //see the original array
    }
}


void add_element_in_between(){
    int arr2[9] = {1,2,3,4,5,6,7,8,9};

    cout <<"Original Array: \n";
    for (int i = 0; i < 9; i++){
        cout<<arr2[i]<<" ";  //see the original array
    }
    int num = 10; // add this umber at location 3
    cout <<"\nNumber to add in the middle: "<<num<<endl;
    cout <<"Index to add the number to: "<<3<<endl;

    for (int i= 8;i>= 3;i--){
        arr2[i+1] = arr2[i];
    }
    arr2[3] = num;

    cout <<"Changed Array: \n";
    for (int i = 0; i < 10; i++){
        cout<<arr2[i]<<" ";  //see the original array
    }
}