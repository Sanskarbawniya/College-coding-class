#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
int main()
{
    int i,n,val;
    node *first, *last, *temp, *temp1;
    cout<<"Enter size of list : ";
    cin>>n;
    first = new node;
    cout<<"Enter the value of node 1 : ";
    cin>>first->data;
    first->link = NULL;
    temp = first;
    for(i=1;i<n;i++)
    {
        last = new node;
        cout<<"node "<<i+1<<" : ";
        cin>>last->data;
        last->link = first;
        temp->link = last;
        temp = last;
    }
    temp1 = new node;
    cout<<"Enter value of new node : ";
    cin>>temp1->data;
    temp1->link = first;
    while (temp->link != first)
    {
        temp = temp->link;
    }
    temp->link = temp1;
    first = temp1;
    temp = first;
    do
    {   
        cout<<temp->data<<" ";
        temp = temp->link;
    } while (temp != first);
}