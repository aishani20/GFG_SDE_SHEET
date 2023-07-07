class Solution{
    public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long merge(long long arr[], int l, int m, int r)
    {
         // Your code here
         m=l+(r-l)/2;
         //defining length of arrays
         int len1=m-l+1;
         int len2=r-m;
         //create array for len1 and len2
         long long *first =new long long[len1];
         long long *second=new long long[len2];
         //copy value
         int mainarrayindex=l;
         for(int i=0;i<len1;i++){
             first[i]=arr[mainarrayindex];
             mainarrayindex++;
         }
         mainarrayindex=m+1;
          for(int i=0;i<len2;i++){
             second[i]=arr[mainarrayindex];
             mainarrayindex++;
          }
          
          //merge two sorted arrays
          int index1=0;
          int index2=0;
          mainarrayindex=l;
          
          long long count=0;
          while(index1<len1 && index2<len2){
              if(first[index1]<=second[index2]){
              arr[mainarrayindex++]=first[index1++];
              }
              else{
                 arr[mainarrayindex++]=second[index2++];
                 count += len1 - index1;
              }
          }
          while(index1<len1){
             arr[mainarrayindex++]=first[index1++];  
          }
          while(index2<len2){
              arr[mainarrayindex++]=second[index2++];
          }
          
          delete[] first;
          delete[] second;
          return count;
    }
    
    long mergeSort(long long arr[], int l, int r)
    {
        //code here
      
        long long count=0;
        //base case
        if(l>=r){
            return count;
        }
       
        int m=l+(r-l)/2;
        //recursive call
        count += mergeSort(arr,l,m);
        count += mergeSort(arr,m+1,r);  
        count += merge(arr,l,m,r);
        return count;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergeSort(arr,0,N-1);
        
        
        
    }

};