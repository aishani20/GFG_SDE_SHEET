class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(!head || !head->next || k==0) return head;
        //compute the length
        int len=1;
        Node* curr=head;
        while(curr->next!=NULL){
            ++len;
            curr=curr->next;
           
        }
        
        curr->next=head;
        k=k%len;
        while(k--){
            curr=curr->next;
            
        }
        head=curr->next;
        curr->next=NULL;
        return head;
    }
    
};
    