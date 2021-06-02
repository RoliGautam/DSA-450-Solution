// Question Link : https://practice.geeksforgeeks.org/problems/reverse-a-string/1#


string reverseWord(string str){

  //   reverse(str.begin(), str.end());  //using reverse function, we can directly reverse a string...
  //   cout<<str;

    //second method : travers string from right side and print it....  
    for(int i = str.size()-1; i>=0; i--){
        cout<<str[i];
    }

   
}
