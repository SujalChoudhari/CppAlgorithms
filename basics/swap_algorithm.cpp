#include <iostream>
using namespace std;

void swap(int &,int &);

int num1, num2;

int main(){
	cout<<"\n\n=====NUMBER SWAppER====="<<endl;
	cout<<"\nEnter 2 numbers:"<<endl;
	cin >> num1 >> num2;

	cout<< "\nNumbers Before Swap:"<<endl;
	cout << "First Number : "<<num1<<endl;
	cout << "Second Number: "<<num2<<endl;

	swap(num1,num2);

	cout<< "\nNumbers After  Swap:"<<endl;
	cout << "First Number : "<<num1<<endl;
	cout << "Second Number: "<<num2<<endl;
	cout << "\nPress ENTER to exit"<<endl;
	cout << "\n\n\n\nMade by Sujal Choudhari";
	return 0;

}

void swap(int &num1, int &num2){
	int temp = num1;
	num1 = num2;
	num2 = temp;
}