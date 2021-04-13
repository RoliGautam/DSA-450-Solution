// Question : Move all negative numbers to beginning and positive to end with constant extra space
// (without caring about order of array)

#include <iostream>
using namespace std;
//the function to find all the negative number of array and then swap them into starting of array..
//we take two parameters one is array and another is size of array...

void move_all_negatice_at_begining(int arr[], int n)
{
    //we take initially , first index as 0
    int start = 0;
    //loop to traverse the array...
    for (int i = 0; i < n; i++)
    {
        //checking condition, if it is negative or not..
        if (arr[i] < 0)
        {
            /*now after checking that this is negative no..then we must check that it should not be at the first index 
        because if it is alrealy at first, then no need to swap them ..*/
            if (i != start)
            {
                //swapping conditions...
                 swap(arr[i], arr[start]);
                //after swapping increase the starting index...
                start++;
            }
        }
    }
}

//this is function to print the array...

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    //take two variable size and array...
    int n, arr[50];
    cout << "enter the size of array"
         << "\t";
    cin >> n; //input the size
    cout << "enter the element of array :" << endl;
    //loop to take the array's element from user...
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "the required array is :" << endl;
    //call the function
    move_all_negatice_at_begining(arr, n);
    //call the print function to print the final array...
    printArray(arr, n);

    return 0;
}
