#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildNode(Node* root){
    int data;
    cout<<"Enter Data: "<<endl;
    cin>>data;
    root = new Node(data);

    if(data == -1)
        return NULL;
    
    cout<<"Enter Data for Left: "<<data<<endl;
    root->left = buildNode(root->left);

    cout<<"Enter Data for Right: "<<data<<endl;
    root->right = buildNode(root->right);

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);
        }
    }
    
}

int main(){
    Node* root = NULL;

    root = buildNode(root);

    levelOrderTraversal(root);
}