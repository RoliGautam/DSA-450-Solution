// sort the array without using any algo and array's elements consist only 0,1,2 number not any othe number
#include<iostream>
using namespace std;

//function to print an array...
void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
}

//the funtion to sort the array...
void sortArray(int arr[], int size){
    //here, we initializing the no of count as 0 for all 0,1, and 2 
int countOfZeros = 0, countOfOnes = 0, countOfTwos = 0;
//traversing whole array 
for(int i = 0; i<size; i++){
    //switch statement to check the cases for 0, 1, 2...
    switch (arr[i])
    {
    case 0:
        countOfZeros++;
        break;
    case 1:
        countOfOnes++;
        break;
    case 2:
        countOfTwos++;
        break;
    }
}

//now to update the array...
int i = 0;
//for 0 elements , updating array by 0....
while (countOfZeros>0)
{
    arr[i]=0;
    i++;
    countOfZeros--;
}
//for 1 elements , updating array by 1....
while (countOfOnes>0)
{
    arr[i]=1;
    i++;
    countOfOnes--;
}
//for 2 elements , updating array by 2....
while (countOfTwos>0)
{
    arr[i]=2;
    i++;
    countOfTwos--;
}
//here print the sorted array...
printArray(arr, size);
}

int main(){
    int arr[50], size;
    cout<<"enter the size of array"<<endl;
    cin>>size;

    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    //printing the main array...
    cout<<"the main array is :"<<endl;
    printArray(arr, size);
    cout<<"\n";

    //calling the of sorting array... 
    cout<<"the sorted array is:"<<endl;
    sortArray(arr, size);


}