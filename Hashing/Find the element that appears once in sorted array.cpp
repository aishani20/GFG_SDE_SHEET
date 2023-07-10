//APPROACH-1 (xor)
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        int ans=0;
        for(int i=0;i<n;i++){
        ans=ans^arr[i];
        
        }
        return ans;
        
    }
};