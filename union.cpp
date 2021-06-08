
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
   // as we know that set always contains distinct element,so we use set here to store array's elements,,
      set<int> s;
   
    // Inserting first array's elements in set..
    for (int i = 0; i < n; i++)
      s.insert(a[i]);
      
   //inserting second array's elements in set...
    for (int i = 0; i < m; i++)
        s.insert(b[i]);
        
   //so , now all the values inserted into set will be distinct from both array, so the total size of set will be out count for union array,,
    int count =  s.size();
        return count;
    }
    
};
