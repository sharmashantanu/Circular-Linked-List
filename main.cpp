#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node *next;
}*head,*temp,*temp1;

int main()
{
    int a,i,j,k,flag,pos;
    char ch,c;
    //struct node *head;
    struct node *temp;
    struct node *temp1;
    head=(struct node*)malloc(sizeof(node));
    temp=(struct node*)malloc(sizeof(node));
    temp1=(struct node*)malloc(sizeof(node));
    cout<<"Enter the node : ";
    cin>>flag;
    head->data=flag;
    temp=head->next;
    head->next=NULL;
    cout<<"Want to add more nodes : ";
    cin>>ch;
    while(ch=='y')
    {
        cout<<"Enter the nodes : ";
        cin>>flag;
        temp1->data=flag;
        temp=temp1->next;
        cout<<"Want to Enter more? : ";
        cin>>ch;
    }
    struct node *cool;10
    cool=head;
    while(cool->next!=NULL)
    {
        cout<<cool->data;
        cool=cool->next;
    }
    temp->next=head;
    cout<<"Want to delete nodes : ";
    cin>>c;
    if(c=='y')
    {
        cout<<"Enter the position of node you want to remove : ";
        cin>>pos;
    }






    return 0;
}
