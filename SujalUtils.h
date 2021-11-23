#pragma once
#include <iostream>

namespace DataUtils{
    /*
    Collection of commonly used data manipulation tools
    Made by Sujal Choudhari [https://github.com/notsujal]

    This file includes:
        swapi (int),
        swapf (float),

        binarySearch (int),
        printArray(int[]),

        bubbleSortd (int[], descending),
        bubbleSorta (int[], ascending),

    */
    void swapi(int& a, int& b){
        /*
        Swap two numbers(integers):
        The original variables will be swapped

        a: first number to swap
        b: second number to swap
        */
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    void swapf (float& a, float& b){
        /*
        Swap two numbers(floating point):
        The original variables will be swapped

        a: first number to swap
        b: second number to swap
        */
        float temp;
        temp = a;
        a = b;
        b = temp;
    }

    void printArray(int arr[],int elements){
        /*
        Print first n elements
        elements: total number of elements to be displayed
        arr: array to print

        */
        for (int i=0; i < elements; i++){
            std::cout << arr[i] << " ";
        }
    }

    int binarySearch(int arr[],int query,int elements){
        /*
        Binary Search
        Sorted Array in ascending order required

        arr: array to search from
        query: item to search for
        elements: total no of items of a array to search for (not index)

        Returns:
        location in array of the query (returns index)
        -1 if elemen not found
        */
        int lower = 0;
        int upper = elements;
        int mid = (lower + upper)/2;

        while (lower <upper){
            mid = (lower + upper)/2;
            
            if (arr[mid] == query){
                return mid;
                break;
            }

            if (arr[mid] < query){
                lower = mid;
            }

            else{
                upper = mid;
            }
        }
        
        return -1;
    }

    void bubbleSorta(int arr[],int elements){
        /*
        Bubble Sort(Ascending)
        Only one entry per value required
        Changes the original array

        arr: array to sort
        elements: no of elements to sort
        */
        bool sorting = true;

        while(sorting){
            sorting = false;
            for (int i=0; i < elements-1;i++){
                if (arr[i] > arr[i+1]){
                    dataUtils::swapi(arr[i],arr[i+1]);
                    sorting = true;
                }
            }
        }

    }

    void bubbleSortd(int arr[],int elements){
        /*
        Bubble Sort(Descending)
        Changes the original array

        arr: array to sort
        elements: no of elements to sort
        */
        bool sorting = true;

        while(sorting){
            sorting = false;
            for (int i=0; i < elements-1;i++){
                if (arr[i] < arr[i+1]){
                    dataUtils::swapi(arr[i],arr[i+1]);
                    sorting = true;
                }
            }
        }

    }

}
