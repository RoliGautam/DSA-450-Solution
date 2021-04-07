#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
   int size, arr[50];
    //we are taking the size of array from the user..
    cout<<"enter the size of array"<<endl;
    std::cin >> size;
    
     //this is for scanning the elements of array...
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i<size; i++){
    cin>>arr[i];
    }

    //we are sorting the array with sort() method...
    sort(arr, arr+size);
    //after sorting the array, the first element will be minimum and last element will be maximum...
       int min = arr[0];
       int max = arr[size-1];
       cout<<"the minimum element is:"<<"\t";
       cout<<min<<endl;
       cout<<"the maximum element is:"<<"\t";
       cout<<max;
     
    return 0;
    
}