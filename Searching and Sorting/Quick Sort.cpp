class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high){
            int pivot=partition(arr,low,high);
            
            quickSort(arr,low,pivot-1);
            quickSort(arr,pivot+1,high);
        }
        
        
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[low];
       int start =low;
       int end=high;
       int k=low;
       for(int i=low;i<=high;i++){
           if(arr[i]<pivot)
           swap(arr[i],arr[++k]);
       }
       swap(arr[low],arr[k]);
       return k;
     
    }
};