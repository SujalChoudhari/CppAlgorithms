#include <iostream>
using namespace std;

int high, low, mid;
int querry,numbers;
int success = 0;

int main()
{

	cout<<"--------Binary Searcher by SUJAL CHOUDHARI ---------\n\n"<<endl;
	int arr[10];
	cout<<"Enter sorted 10 element (seperate by space): ";
	numbers = 10;
	for(int i = 1; i<=numbers;i++)
	{
	 cin>>arr[i];
	}


	high = numbers -1;
	low = 0;

	cout<<"Enter a number to search : ";
	cin>>querry;

	while(low<high)
	{
		mid = (high + low) /2;

		if(arr[mid] == querry)
		{
			cout<<"Found "<<querry<<" at location "<<mid-1<<endl;
			success = 1;
			break;
		}
		else if(arr[mid] <= querry)
		{
			low = mid +1;
		}
		else
		{
			high = mid;
		}
	}
	if (!success)
	{
		cout<<"Search Failed, element "<<querry<<" doesn't exists"<<endl;
	}
	return 0;

}