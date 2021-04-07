//reverse the array with the help of functions..
#include <iostream>
using namespace std;

//function to reverse the array...
void reverseArray(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/* function to print the array, here need a function , because we have to print both the previous and reverse array
 so, if we don't use a function , they we will repeat same code of printing the array , which is not good..*/

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
}

//this is the main funtion...
int main()
{  
    int size, arr[50];
    //we are taking the size of array from the user..
    cout<<"enter the size of array"<<endl;
    std::cin >> size;
    
    //this is for scanning the elements of array...
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i<size; i++){
    cin>>arr[i];
    }
    
    cout<<"the main array is :"<<endl;
    //calling the function to print the previous array...
    printArray(arr, size);
    cout<<endl;
    
    //calling the funtion to reverese the array...
    reverseArray(arr, 0, size-1);
    cout<<"the reverse array is :"<<endl;
    
    //again calling the function to print the reverse array...
    printArray(arr, size);
    
    return 0;
}
