
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin >>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i<n; i++){
    cin>>arr[i];
    }
    //let initially max and min are at 0th position...
    int minE = arr[0], maxE = arr[0];
    for(int i = 0; i<5; i++){
        //used min and max function to determine...
        minE = min(minE, arr[i]);
        maxE = max(maxE, arr[i]);
        
    }
    cout<<"minimum element is : "<<minE<<"\n"<<"Maximum element is : "<< maxE;
    return 0;
}
