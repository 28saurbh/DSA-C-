#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = right;
    }
};

Node *buildTree(Node *root)
{
    int temp;
    cout << "enter data:" << endl;
    cin >> temp;
    root = new Node(temp);

    if (temp == -1)
        return NULL;

    // left node
    cout << "Enter data on left node of " << temp << endl;
    root->left = buildTree(root->left);

    // right node
    cout << "Enter data on right node of " << temp << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node *root)
{
    cout<<endl << "Level Order Traversal: " << endl;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if(!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorderTraversal(Node* root){
    //LNR
    
    Node* temp = root;
    if(temp == NULL)
        return;

    inorderTraversal(temp->left);
    cout<<temp->data<<" ";
    inorderTraversal(temp->right);

    return ;

}

void preOrderTraversal(Node* root){
    //NLR
    Node* temp = root;

    if(temp == NULL)
        return ;

    cout<<temp->data<<" ";
    preOrderTraversal(temp->left);
    preOrderTraversal(temp->right);
}

void postOrderTraversal(Node* root){
    //LRN
    Node* temp = root;

    if(temp == NULL)
        return;

    postOrderTraversal(temp->left);
    postOrderTraversal(temp->right);
    cout<<temp->data<<" ";
}

// 1 2 4 8 -1 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);
    cout<<endl<<"In-order Traversal : "<<endl;
    inorderTraversal(root);
    cout<<endl<<"Pre-Order Traversal: "<<endl;
    preOrderTraversal(root);
    cout<<endl<<"Post-order Traversal: "<<endl;
    postOrderTraversal(root);
}