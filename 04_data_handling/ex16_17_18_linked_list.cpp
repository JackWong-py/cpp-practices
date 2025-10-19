//**Concepts:** nodes, pointers to structs, traversal.
//
//16. **Create Simple Linked List (3 nodes)**
//
//    * Define `struct Node { int data; Node* next; };`
//    * Manually link 3 nodes and print values.
//
//17. **Insert at Head**
//
//    * Write a function `void insertHead(Node*& head, int value);` that adds a new node at the beginning.
//
//18. **Count Nodes in Linked List**
//
//    * Function that traverses and counts number of nodes.
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};
void display_linked_list(Node* node)
{
    while (node != NULL)
    {
        cout << node->data;
        node = node->next;

        if (node != NULL)
            cout << " -> ";
    }
    cout << "\n";
}
void insert_head(Node*& head, int value)
{
    Node* new_head = new Node;
    new_head->data = value;
    new_head->next = head;
    head = new_head;
}
int count_node(Node* head)
{
    int count = 0;
    while (head != NULL)
    {
        count += 1;
        head = head->next;
    }
    return count;
}


int main()
{
    Node* p_list = NULL;
    Node* p_first = new Node;
    Node* p_second = new Node;
    Node* p_third = new Node;

    p_list = p_first;
    p_first->data = 10;
    p_second->data = 20;
    p_third->data = 30;

    p_first->next = p_second;
    p_second->next = p_third;
    p_third->next = NULL;

    display_linked_list(p_list);
    cout << "Total " << count_node(p_list) << (count_node(p_list) > 1 ? " Nodes." : " Node.") << endl;
    insert_head(p_list, 5);
    display_linked_list(p_list);
    cout << "Total " << count_node(p_list) << (count_node(p_list) > 1 ? " Nodes." : " Node.") << endl;

    while (p_list != NULL)
    {
        Node* temp = new Node;
        p_list = p_list->next;
        delete temp;
    }
    return 0;
}
