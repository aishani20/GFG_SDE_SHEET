//APPROACH 1 -XOR
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        sort(array.begin(),array.end());
        int x1=array[0];
        int x2=0;
        // For xor of all the elements in array
        for(int i=1;i<array.size();i++)
            x1=x1^array[i];
            
        // For xor of all the elements from 1 to n+1
        for(int i=1;i<=n;i++)
            x2=x2^i;
        
       return(x1^x2);
    }
    
};