#include <iostream>
using namespace std;

// cache out some variables in memory
int high, low, mid; //indices of the array [last, first, middle]
int querry; //number to search
int numbers = 10; //size of array
int success = 0; // to find weather the querry is satisfied
int arr[10]; //init the array

// main function
int main()
{

	cout<<"--------Binary Searcher by SUJAL CHOUDHARI ---------\n\n"<<endl;

	//populate the array
	cout<<"Enter sorted 10 element (seperate by space): ";
	for(int i = 1; i<=numbers;i++)
	{
	 cin>>arr[i];
	}

	//set the vaues of high low 
	high = numbers -1;
	low = 0;

	//get the querry from the user
	cout<<"Enter a number to search : ";
	cin>>querry;

	//run the binary search algorithm
	while(low<high)
	{
		//set the middle index.
		mid = (high + low) /2;

		// compare the middle value with querry 
		if(arr[mid] == querry)
		{
			// if equal then the searched element is found 
			cout<<"Found "<<querry<<" at location "<<mid-1<<endl;
			success = 1; //set success to 1 so we know that the element is found
			break;
		}
		else if(arr[mid] < querry)
		{
			// if the middle value is smaller than the querry then reset the lower limit
			low = mid +1;
		}
		else
		{
			// if the middle value is bigger then the querry, then reset the high value 
			high = mid;
		}
	}
	if (!success)
	{
		// if we dont find anything 
		cout<<"Search Failed, element "<<querry<<" doesn't exists"<<endl;
	}
	return 0;

}