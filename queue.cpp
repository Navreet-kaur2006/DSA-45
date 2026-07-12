 /* #include<iostream>                     //QUEUE
using namespace std;

    class Node{
       public:
       int data;
       Node* next;

       Node(int val){
    data=val;
    next=NULL;
   }

    };

    class queue{
         public:

         Node* front=NULL;
         Node* rear=NULL;


         void push(int val){
            Node* newNode = new Node(val); 

            if(front==NULL && rear==NULL){
                rear=front=newNode;
            }
            else{
                rear->next=newNode;
                rear=newNode;


            }


         }
         
         void pop(){
            if(front==NULL && rear==NULL){
                cout<<"queue is empty";
            }
            else{
                Node* temp=front;

            front=temp->next;
            temp->next=NULL;
           delete temp ;
            }

         }

         void print(){
            Node* temp=front;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp=temp->next;
            }

            cout<<"NULL";


         }

    };



    int main(){
        queue obj;
        obj.push(4);
        obj.push(8);
        obj.push(6);
        obj.pop();
        obj.pop();
        obj.print();

    }
*/

// double ended queue

#include<iostream>
using namespace std;

//dequeue-> operation dequeue       deque-> doubly ended queue


class Node{
       public:
       int data;
       Node* next;

       Node(int val){
    data=val;
    next=NULL;
   }
};


class deque{

    public:
    Node* front=NULL;
    Node* rear=NULL;

    void enqueue(int val,int pos){
        if(pos == 1){
             Node* newNode =new Node(val);
            if(front==NULL&& rear==NULL){
                front = rear= newNode ; 
            }else{
                 Node* newNode =new Node(val);

                newNode->next=front;
            front=newNode;

            }
        }
        else if(pos==-1){
             Node* newNode =new Node(val);
             if(front==NULL&& rear==NULL){
                front = rear= newNode ; 
            }else{
                rear->next=newNode;
            rear= newNode;

            }
       
        }
        else{
            cout<<"pos is incorrect";
        }
    }

    void dequeue(int pos){
        if(pos==1){
            if(front==NULL && rear==NULL){
            cout<<"queue is empty";
            }else{
                Node* temp=front;

            front=temp->next;
            temp->next=NULL;
           delete temp ;

            }
    
        }
        else if(pos==-1){
            if(front ==NULL && rear == NULL ){
                cout<<"Queue is Empty";
            }else{
            Node* temp=rear;
            rear=temp->next;
            temp->next=NULL;
            delete temp;

            }
   
            }

        
        else{
            cout<<"pos is incorrect";
        }

    }

    void print(){
        if(front==NULL && rear==NULL){
            cout<<"queue is empty";
        }else{

            Node* temp=front;
            while(temp!= NULL){
                cout<<temp->data<<"->";
                temp=temp->next;
            }

            cout<<"NULL";

        }

            
         }
        
        };

int main(){

    deque obj;
    obj.enqueue(2,1) ; 
    obj.enqueue(8,-1);
    obj.print();

    

}
