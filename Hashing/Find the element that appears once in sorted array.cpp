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


//APPROACH-2 (MAP)
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        // int ans=0;
        // for(int i=0;i<n;i++){
        // ans=ans^arr[i];
        
        // }
        // return ans;
        
        unordered_map<int,int>mp;
        //iterate through array
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
            //iterate through map
            for(auto x:mp){
            //here x.first reprsents the key and x.second represents the corresponding value.
            if(x.second==1){
                return x.first;
                break;
            }
        }
        
    
    }
};