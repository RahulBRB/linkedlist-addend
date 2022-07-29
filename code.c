#include<stdio.h>
main(){
    node*head=NULL;
    addbegin(&head,2);
    traverse(head);

    void addbegin(node**ptrhead,int val){
        node*ptr;
        ptr=(node*)malloc(sizeof(node));
        ptr->data=val;
        ptr->next=*ptrhead;
        *ptrhead=ptr;
    }

    void traverse(node*ptr){
        while(ptr!=NULL){
            print ptr->data;
            ptr=ptr->next;
    }
}

//Addend

addend(node**ptrhead;int val){
    tmp=(node*)malloc(sizeof(node));
    tmp->data=val;
    tmp->next=NULL;
    if(ptrhead==NULL)
    *ptrhead=tmp;
    else{
        ptr=*ptrhead;
        while (*ptr->next!=NULL)
        ptr=ptr->next;
        ptr->next=tmp;
    }
}
