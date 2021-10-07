#include <iostream>
using namespace std;

int main(){
    int array[10],i=0,j;
    cout<<"Bubble Sorter Made by Sujal Choudhari"<<endl;
    cout<<"Enter 10 Real Nos. :";
    for (i=0;i<10;i++){
        cin>>array[i];
    }

    cout<<endl<<endl<<"Original List: "<<endl;
    for (i=0; i<10;i++){
        cout<<array[i]<<" ";
    }
    i = 0;
    while (i==0){
        i=1;
        for(j=0;j<9;j++){
            if (array[j] > array[j+1]){
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                i = 0;
            }
        }
    }

    cout <<endl<<endl<<"Sorted List: "<<endl;
    for (i=0; i<10;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}