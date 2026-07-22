#include<iostream>                     //BINARY SEARCH TREE
#include<queue>
using namespace std;

class Node{
    public:
    int  data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

class binarytree{
    public:
    int idx=-1;

    Node* buildtree(int nodes[]){
        idx++; 
        if(nodes[idx]==-1){
            return NULL;
        }else{
            Node* newNode=new Node(nodes[idx]);

            newNode->left=buildtree(nodes);
            newNode->right=buildtree(nodes);

            return newNode;
        }
    }


    int  countNodes(Node* root){

        if(root==NULL){
            return 0;
        }
        int leftNodes=countNodes(root->left);
        int rightNodes=countNodes(root->right);
        return leftNodes+rightNodes+1;
    }


    bool search(Node* root , int key){
        if(root==NULL){
            return false;
        }
        if(root->data==key){
            return true;
        }

        return search(root->left,key) || search(root->right,key);     // search ala code dubara chla left vste ya right vste



    }
    
    void deleteDeepestNode(Node* root,Node* dNode){
        queue<Node*>q;

        q.push(root);

        Node* temp=q.front();
        q.pop();
        if(temp->left){
            if(temp->left==dNode){
            delete temp->left;
            temp->left=NULL;
        }
        }



        if(temp->right){
            if(temp->right==dNode){
            delete temp->right;
            temp->right=NULL;
        }
        }

        q.push(temp->right);
    }
    
    void preorder(Node* root){


        if(root==NULL){
            return;
        }else{
            cout<<root->data<<"- ";

            preorder(root->left);
            preorder(root->right);

        }

    }
    void inorder(Node* root){
        if(root==NULL){
            return;
        }else{
            inorder(root->left);
            cout<<root->data<<"-";
            inorder(root->right);
        }
    }

    void postorder(Node* root){
        if(root==NULL){
            return;
        
        }else{
            postorder(root->left);
            postorder(root->right);
            cout<<root->data<<"-";
        }
    }

    /* void levelwiseorder(Node* root){
        if(root==NULL)
            return;
    
        queue<Node*>Q;
         Q.push(root);
        Q.push(NULL);


        while(!Q.empty()){
                Node* currentNode=Q.front();

                Q.pop();
                if(currentNode==NULL){
                    cout<<endl;
                    
                    if(Q.empty())
                        break;
                    Q.push(NULL);

                }else{

                    
                        cout<<currentNode->data<<" ";
                        if(currentNode->left!=NULL)
                             Q.push(currentNode->left);
            
                        if(currentNode->right=NULL)
                            Q.push(currentNode->right);
                


                }       

            }
        }  */


void levelOrder(Node* root)
{
    if (root == NULL)
        return;

    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            cout << endl;

            if (q.empty())
                break;

            q.push(NULL);
        }
        else
        {
            cout << curr->data << " ";

            if (curr->left != NULL)
                q.push(curr->left);

            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
}
};


int main(){
   
    int nodes[]={
        3,
        2,
        7,-1,-1,
        5,-1,-1,
        4,
        9,-1,-1,
        8,-1,-1
    };

    binarytree tree;

    Node* root = tree.buildtree(nodes);

    //cout<<"Preorder - "<<endl ; 
    //cout<<"inorder - "<<endl ; 
    // cout<<"inorder - "<<endl ; 

   
    //tree.preorder(root);

    //tree.inorder(root);
   tree.postorder(root);
    //tree.levelwiseorder(root);
    //tree.levelOrder(root);



}          
