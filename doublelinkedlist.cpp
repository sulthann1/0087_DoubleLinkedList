#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
private:
    Node *START;

public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nEnter the roll number of student :";
        cin >> nim;

        // Step 1 : Allocate memory for new node
        Node *newNode = new Node();

        // Step 2 : Assign  value to the data field
        newNode -> noMhs = nim;
        
        //Step 3 : Insert at beginning if list is empty or nim is
        if (START == NULL || nim <= START -> noMhs )
        (
            if (START != NULL && nim  == START -> noMhs )
            {
                cout << "\nDuplicate  number not allowed" << endl; 
                return;
            }
            // Step 4 : newNode.next = START
            newNode -> next = START;

            //Step 5 : START.prev = newNode (if START exist)
            {
            if (START !=NULL)
            START -> prev = newNode;

            // Step 6 : newNode.prev = NULL
            newNode -> prev = NULL;
            // Step 7 : START = newNode
            START = newNode;
            return;
            }

            //insert in between node
            // Step 8 : locate position for insertion

            Node *current = START;
            while (current -> next != NULL && current -> next -> noMhs < nim)

        )
    }
};