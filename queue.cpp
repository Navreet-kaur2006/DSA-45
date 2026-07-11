#include<iostream>
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
        obj.push(5);
        obj.push(7);
        obj.pop();

        obj.print();

    }

