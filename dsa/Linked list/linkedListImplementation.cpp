#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

//global rear and front nodes
node *front, *rear;

//initializing null 


//displaying values in linked list
void printList(node *traverse)
{
    while (traverse != NULL)
    {
        cout << traverse->data << endl;
        traverse = traverse->next;
    }
}


// inserting value in a linked list
int enter_val(){
    int value;
    cout<<"Enter a value: ";
    cin>>value;

    return value;
}
void insert_rear()
{
    int value=enter_val();
    

}
void insert_front(){
    int value=enter_val();
    

}
void insert_nth(int n){
    int value=enter_val();

}




int main()
{
    node *b = new node;
    b->data = 10;

    node *a = new node;
    a->data = 40;

    a->next = b;
    b->next = NULL;

    printList(a);

    return 0;
}