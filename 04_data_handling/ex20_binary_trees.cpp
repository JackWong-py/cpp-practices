#include <iostream>

using namespace std;

struct node
{
    int key_value;
    node* p_left;
    node* p_right;
};
node* insert(node* p_tree, int key);
node* search(node* p_tree, int key);
void destroy_tree(node* p_tree);
node* remove(node* p_tree, int key);
node* find_max(node* p_tree)
{
    if(p_tree == nullptr)
    {
        return nullptr;
    }
    if (p_tree->p_right == nullptr)
    {
        return p_tree;
    }
    return find_max(p_tree->p_right);
}
node* remove_max_node(node* p_tree, node* p_max_node)
{
    //defensive coding--shouldnt actually hit this
    if (p_tree == nullptr)
    {
        return nullptr;
    }
    //we found the node, now we can replace it
    if (p_tree == p_max_node)
    {
        /*The only reason we can do this is becuase
        we know p_max_node->p_right is nullptr, so we arent
        losing any infomtaion. If p_max_code has no left subtree,
        then we will just return nullptr from this branch, which will
        result in p_max_node being replaced with an empty tree,
        which is what we want.*/
        return p_max_node->p_left;
    }
    //each recursive call replaces the right subtree
    //tree with a new subtree that does not contain p_max_node.
    p_tree->p_right = remove_max_node(p_tree->p_right, p_max_node);
    return p_tree;
}
// --- Helper function to print the tree in sorted order (Inorder Traversal)
void print_inorder(node* p_tree) {
    if (p_tree != nullptr) {
        print_inorder(p_tree->p_left);
        cout << p_tree->key_value << " ";
        print_inorder(p_tree->p_right);
    }
}
int main()
{
    node* root = nullptr;

    cout << "--- Binary Tree Demo ---\n";
    cout << "Inserting nodes: 50, 30, 70, 20, 40, 60, 80\n";

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "Inorder Traversal (sorted): ";
    print_inorder(root);
    cout << "\n";

    cout << "\nSearching for node with value 40...\n";
    node* found = search(root, 40);
    if (found != nullptr)
        cout << "Found node with key " << found->key_value << endl;
    else
        cout << "Node not found.\n";

    cout << "\nRemoving node with value 70...\n";
    root = remove(root, 70);
    cout << "Tree after deletion (inorder): ";
    print_inorder(root);
    cout << "\n";

    cout << "\nDestroying entire tree...\n";
    destroy_tree(root);

    return 0;
}
node* insert(node* p_tree, int key)
{
    //base case: we have reached an empty tree and need to insert out new node here.
    if (p_tree == nullptr)
    {
        node* p_new_tree = new node;
        p_new_tree->p_left = nullptr;
        p_new_tree->p_right = nullptr;
        p_new_tree->key_value = key;
        return p_new_tree;
    }
    //decide whether to insert into left subtree or right subtree depending on the value of the node.
    if (key < p_tree->key_value)
    {
        /*Build a new tree based on p_tree->left by adding
        the key. Then replacing the existing p_tree->left pointer with a pointer
        to the new tree. We need to set the p_tree->left pointer in case p_tree->p_left won't
        actually change. But it doesn't hurt to set it.*/
        p_tree->p_left = insert(p_tree->p_left, key);
    }
    else
    {
        /*Insertion into the right is exactly symmetric to insertion into the left*/
        p_tree->p_right = insert(p_tree->p_right, key);
    }
    return p_tree;
}
node* search(node* p_tree, int key)
{
    //If we reach the empty tree, clearly it's not here.
    if (p_tree == nullptr)
    {
        return nullptr;
    }
    //If we find the key, we're done.
    else if (key == p_tree->key_value)
    {
        return p_tree;
    }
    //Otherwise, try looking in either the left or the right subtree.
    else if (key < p_tree->key_value)
    {
        return search(p_tree->p_left, key);
    }
    else
    {
        return search(p_tree->p_right, key);
    }
}
void destroy_tree(node* p_tree)
{
    if (p_tree != nullptr)
    {
        destroy_tree(p_tree->p_left);
        destroy_tree(p_tree->p_right);
        cout << "Deleting node: " << p_tree->key_value << endl;
        delete p_tree;
    }
}
node* remove(node* p_tree, int key)
{
    if (p_tree == nullptr)
    {
        return nullptr;
    }
    if (p_tree->key_value == key)
    {
        //The first two cases handle having zero or one child node.
        if (p_tree->p_left == nullptr)
        {
            node* p_right_subtree = p_tree->p_right;
            delete p_tree;
        //This might return NULL if there are zero child nodes, but is what we want anyway
            return p_right_subtree;
        }
        if (p_tree->p_right == nullptr)
        {
            node* p_left_subtree = p_tree->p_left;
            delete p_tree;
            //This will always return a valid node, sincce we know p_tree->p_left is not NULL from
            //the previous if statement
            return p_left_subtree;
        }
        node* p_max_node = find_max(p_tree->p_left);
        //since p_max_node came from the left subtree, we need to remove it from that subtree
        //before relinking that subtree back into the rest of the tree.
        p_max_node->p_left = remove_max_node(p_tree->p_left, p_max_node);
        p_max_node->p_right = p_tree->p_right;
        delete p_tree;
        return p_max_node;
    }
    else if (key < p_tree->key_value)
    {
        p_tree->p_left = remove(p_tree->p_left, key);
    }
    else
    {
        p_tree->p_right = remove(p_tree->p_right, key);
    }
    return p_tree;
}
