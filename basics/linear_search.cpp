#include <iostream>
using namespace std;


int main(){
    cout << "Made by Sujal Chouhdari"<<endl;
    //  array to search through
    int array[10] = {10,20,33,44,90,2,3,4,29,100};
    int querry = 4;

    for (int i=0; i<10; i++){
        if (array[i] == querry){
            //element found
            cout<<querry<<" found at location "<<i<<endl;
            return 0;
        }
    }
    cout<<querry<< " doesn't exists"<<endl;
    return 0;
}