//First question of array
// Write a program to reverse the array?
#include<iostream>
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

    cout<<"the reverse array is :"<<endl;
    for(int i = size-1; i>=0; i--){
        cout<<arr[i]<<"\t";
    }
    return 0;
    
}