// Question link: https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1#

void rotate(int arr[], int n)
{
    //we need a variable temp to store the last element of array...
     int temp = arr[n-1];
     //now shift all the element by one to the right side...
      for(int i = n-1; i>0; i--){
           arr[i] = arr[i-1];
       }
       //and after this, store last element at first position...
      arr[0] =  temp;
}
