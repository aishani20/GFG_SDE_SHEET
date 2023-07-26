Node* deleteNode(Node *head,int x)
{
    //Your code here
   if(x==1){
       Node* temp=head;
       head=head->next;
       temp->next=NULL;
       delete temp;
   }
   else{
    Node* nextnode;
    Node* temp;
    int count=1;
    temp=head;
    while(count<x-1){
        temp=temp->next;
        count++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
    
}
return head;
}