class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int low=0;
        int mid=0;
        int high=n-1;
     
        while(mid<=high){
            if(a[mid]==0){
            swap(a[low],a[mid]);
            mid++;
            low++;
            }
            
            else if(a[mid]==2){
                swap(a[mid],a[high]);
                high--;
            
            }
            else{
                mid++;
            }
            
            
        }
        
    }

    
};