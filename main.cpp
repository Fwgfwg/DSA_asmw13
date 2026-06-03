#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

// B1. Khoi tao BST
Node* Initial_BST()
{
    return NULL;
}

// B2. Them nut vao BST
void add_node(Node*& root, int x)
{
    if(root == NULL)
    {
        root = new Node;
        root->data = x;
        root->left = NULL;
        root->right = NULL;
        return;
    }

    if(x <= root->data)
        add_node(root->left, x);
    else
        add_node(root->right, x);
}

// B3. Tim kiem tren BST
Node* search_BST(Node* root, int x)
{
    if(root == NULL)
        return NULL;

    if(root->data == x)
        return root;

    if(x <= root->data)
        return search_BST(root->left, x);
    else
        return search_BST(root->right, x);
}

int main()
{
    int a[] = {2001, 2002, 2006, 2007, 2003, 2004, 2005, 2001, 1999, 2004};

    int n = sizeof(a) / sizeof(a[0]);

    Node* BST = Initial_BST();

    for(int i = 0; i < n; i++)
    {
        add_node(BST, a[i]);
    }

    int x;

    cout << "Nhap nam sinh can tim: ";
    cin >> x;

    Node* p = search_BST(BST, x);

    if(p != NULL)
        cout << "\nTim thay sinh vien co nam sinh " << x;
    else
        cout << "\nKhong tim thay sinh vien co nam sinh " << x;

    return 0;
}
