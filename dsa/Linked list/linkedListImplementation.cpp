#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

// global rear and front nodes
// initializing null
node *front = NULL, *rear = NULL;

// displaying values in linked list
void printList()
{
    node *current = front;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // free(temp);
}

// inserting value in a linked list
int enter_val()
{
    int value;
    cout << "Enter a value: ";
    cin >> value;
    return value;
}

void insert_rear()
{
    // enter new value
    int count;
    int value = enter_val();

    // creating temperary node
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;


    if (rear == NULL)
    {
        // means empty list
        front = temp;
        rear = temp;
    }
    else
    {
        // means it has some value
        rear->next = temp;
        rear = temp;
    }

    free(temp);
}
void insert_front()
{
    int value = enter_val();
}
void insert_nth(int n)
{
    int value = enter_val();
}

int main()
{
    // insert_rear();
    // insert_rear();
    // insert_rear();
    // insert_rear();
    // insert_rear();

    // printList();

    int choice;
    while (true)
    {
        cout << "1. Insert rear" << endl;
        cout << "2. Print" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;
        switch (choice)
        {
        case 1:
            insert_rear();
            cout<<"Done!";
            system("pause");
            system("cls");
            break;
        case 2:
            printList();
            system("pause");
            system("cls");
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Invalid Input!" << endl;
            break;
        }
    }
    return 0;
}