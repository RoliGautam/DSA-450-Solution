class Solution {
public:
    int maxArea(vector<int>& arr) {
        //take left pointer at 0th index and right pointer at the end....
             int l = 0;
             int r = arr.size()-1;
        //initially let maxArea is 0...
             int maxArea = 0;
        //traverse loop till left == right...
            while(l<r){
                //width will be difference b/t both length...(right-left)..
                int width = r-l;
                //min height will be minimum of both the heights...
                int minHeight = min(arr[l], arr[r]);
                //now maximum area will be minHeight * width...
                maxArea =  max(maxArea, minHeight * width);  
                //to move forward, if left height became less that right then move left index ...
                 if(arr[l]<arr[r]){
                 l++;
                }else{
                     r--;
                 }
        }
        //return our maxArea....
        return maxArea;
    } 
};







