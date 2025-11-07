#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
int main()
{
    int i,n,val,count=1, flag=0;
    node *temp, *first, *last;
    cout<<"Enter size of the list : ";
    cin>>n;
    first = new node;
    first->link = NULL;
    cout<<"Enter the value of node 1 : ";
    cin>>first->data;
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
    cout<<"Enter value to search : ";
    cin>>val;
    count = 1;
    temp = first;
    do 
    {
        if (temp->data == val) 
        {
            cout << "Element found at " << count << endl;
            flag = 1;
        }
    temp = temp->link;
    count++;
    } 
    while (temp != first);

    if(flag == 0)
    {
        cout<<"Element not found.";
    }
    
}