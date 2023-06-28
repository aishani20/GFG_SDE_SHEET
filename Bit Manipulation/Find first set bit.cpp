class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int counter=1;
        int mask=1;
        while(n>0){
            if(mask & n){
            return counter;
            }
        
            n=n>>1;
            counter++;
        }
        return 0;
        
    }
};