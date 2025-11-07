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
    node *first, *temp, *last;
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
    temp = first;
    do
    {
        cout<<temp->data;
        temp = temp->link;
    } while (temp != first);
}
