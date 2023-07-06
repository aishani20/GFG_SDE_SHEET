class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         m=l+(r-l)/2;
         //defining length of arrays
         int len1=m-l+1;
         int len2=r-m;
         //create array for len1 and len2
         int *first =new int[len1];
         int *second=new int[len2];
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
          
          while(index1<len1 && index2<len2){
              if(first[index1]<=second[index2]){
              arr[mainarrayindex++]=first[index1++];
              }
              else{
                 arr[mainarrayindex++]=second[index2++];
              }
          }
          while(index1<len1){
             arr[mainarrayindex++]=first[index1++];  
          }
          while(index2<len2){
              arr[mainarrayindex++]=second[index2++];
          }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
      
        //base case
        if(l>=r){
            return;
        }
        int m=l+(r-l)/2;
        //recursive call
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);  
        merge(arr,l,m,r);
    }
    
};