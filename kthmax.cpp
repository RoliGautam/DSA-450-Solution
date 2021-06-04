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
    int k;
    cout<<"enter the value of K"<<"\t";
    cin>>k;
    //we are sorting the array with sort() method...
    sort(arr, arr+size);
    cout<<"Kth minimum element is :"<<endl;
    int minK = arr[k-1];
    cout<<minK<<endl;
     
    return 0;
    
}
