//LINKED LIST

 /* #include<iostream>
#include<vector>                       // only pushfront 
using namespace std;

class Node{                // to create node
   public:
    int data;
   Node* next;                 // store address of next node
  
   Node(int val){
    data=val;
    next=NULL;
   }


};

class Linkedlist{  
    public:            // to  create linked list
    Node* head;
    Node* tail;

    Linkedlist(){

        head=NULL;
        tail=NULL;
    

    }


    void push_front(int val){
            Node* newNode = new Node(val); 

    if(head==NULL && tail==NULL){
        tail=head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;

        }



    }

    void print_LL(){
        Node* temp=head;
        while(temp !=NULL){
            cout<<temp->data<<"-> ";
            temp=temp-> next;
        }
        cout<<"NULL"<<endl;

    
    }


};




int main(){
   
   vector<int>nums;
   Linkedlist ll;

   ll.push_front(6);
   ll.push_front(8);
   ll.push_front(9);
   ll.push_front(10);

   ll.print_LL();       
   

}
 */  




/*   #include<iostream>
#include<vector>                                             
using namespace std;                        

class Node{                // to create node
   public:
    int data;
   Node* next;                 // store address of next node
  
   Node(int val){
    data=val;
    next=NULL;
   }


};

class Linkedlist{  
    public:            // to  create linked list
    Node* head;
    Node* tail;

    Linkedlist(){

        head=NULL;
        tail=NULL;
    

    }

    void push_front(int val){
            Node* newNode = new Node(val);    // for new node

    if(head==NULL && tail==NULL){
        tail=head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;

        }

    }

    void pop_front(){                          // to delete the node from the front
      
        if(head==NULL&& tail==NULL){
            cout<<"linked list is empty";
            return;
        }
        else{
            Node* temp=head;
            head=temp->next;
            temp->next=NULL;
            delete temp;

        }
    }



    void pop_back(){                        // to delete node from back
        if(head==NULL && tail==NULL){
            cout<<"linked list is empty";
            return;
        }
        else{
            Node* temp=head;

            while(temp->next->next!=NULL){

                    temp=temp->next; 
            }


           temp->next=NULL;
           delete tail;

           tail=temp;
        }

    }




    void push_back(int val){

        Node* newNode = new Node(val); 

    if(head==NULL && tail==NULL){
        tail=head=newNode;
        }
        else{

            tail->next = newNode;
            tail = newNode; 

        }




    } 


    void insert(int val,int pos){                       
         Node* newNode = new Node(val);                  // to insert a new node
         
    if(pos<=0){
            cout<<"invalid position";
         }
         else if(pos==1){
            push_front(val);
         }
    else{
        Node* temp=head;
            for(int i=1;i<pos-1;i++){

            if(temp==NULL){
                return;
            }
                temp=temp->next;

            }

            Node* newNode=new Node(val);

            newNode->next=temp->next;
            temp->next=newNode;


         }
    }




    void print_LL(){
        Node* temp=head;
        while(temp !=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

    
    }


};




int main(){
   
   vector<int>nums;
   Linkedlist ll;



   ll.push_back(6);
   ll.push_back(9);
   ll.push_front(4);
   ll.insert(7,2);

   //ll.pop_front();
  ll.pop_back();

   ll.print_LL();       
}     
   */




   //DOUBLY LINKED LIST

 #include<iostream>
#include<vector>                                             
using namespace std;                        

class Node{                // to create node
   public:
    int data;
   Node* next;                  // store address of previous  node
   Node* prev;                 // store address of next node
  
   Node(int val){
    data=val;
    prev=NULL;
    next=NULL;
   }


};

class doublylinkedlist{  
    public:            // to  create linked list
    Node* head;
    Node* tail;
  

    Linkedlist(){

        head=NULL;
        tail=NULL;
        
    

    }

   void push_front(int val){
            Node* newNode = new Node(val);    // for new node

    if(head==NULL && tail==NULL){
        tail=head=newNode;
        }
        else{
            newNode->next=head;
            newNode->prev=NULL;
            head->prev=newNode;
            head=newNode;
        }

    }




    void push_back(int val){

        Node* newNode = new Node(val); 

    if(head==NULL && tail==NULL){
        tail=head=newNode;
        }
        else{

            tail->next = newNode;
            newNode=NULL;
            tail->prev=NULL;
            tail=newNode; 

        }




    } 


    void print_LL(){
        Node* temp=head;
        while(temp !=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

    
    }


};




int main(){
   
   vector<int>nums;
   doublylinkedlist ll;

   ll.push_front(4);
   ll.push_front(6);
   ll.push_front(8);
   ll.print_LL();       
   

}
