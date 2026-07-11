/* #include<iostream>
#include<vector>
using namespace std;

class stack{
    public:
    vector<int>v1;

    void push(int val){
        v1.push_back(val);
    }

    void pop(){
        v1.pop_back();


    }

    void printstack(){
        if(v1.size()==0){
            cout<<"the stack is empty";

        }
        else{
            for(int i=0;i<=v1.size()-1;i++){
                cout<<v1[i];
            }
            
        }

        
    }
    



};
int main(){
    stack obj;
    obj.push(5);
    obj.push(7);
    obj.push(9);
    obj.pop();
    obj.pop();
    
    obj.printstack();

   

    
} */


/*  #include<iostream>                   // stack using linkedlist
#include<list>
using namespace std;

class stack{
    public:
    list<int>l1;


    void push(int val){
        l1.push_front(val);

    }

    void pop(){
        l1.pop_front();


    }

    void print(){
        if(l1.size()==0){
            cout<<"list is empty";
        }
        else{
            for(int i=0;i<=l1.size()+1;i++){
                cout<<l1.front();

                l1.pop_front();


            }
            }
            }
        };
int main(){

    stack obj;
    obj.push(5);
    obj.push(4);
    obj.push(3);


    obj.print();


}  */
    

  #include<iostream>                           //STACK USING ARRAY
    #include<array>
    using namespace std;

    class stack{
        public:
        array<int,7>arr;
        


        void push(int val){                            //DRY  RUN PUSH CODE
       int n=sizeof(arr)/sizeof(arr[0]);
       if(n<=arr.size()){
        int i=arr[arr.size()-1];

        while(i<arr.size()){
            arr[i]=arr[i+1];
            i--;
        }
        arr[i]=val;

       }
       else{
        cout<<"overflow-element can't be added"<<endl;
       }
    }

    void pop(){

    }

    void print(){
        if(arr.size()==0){
            cout<<"stack is empty";
        }
        else{
            for(int i=arr.size()-1;i>=0;i--){
                cout<<arr[i];


            }
            }
            }
        };

    int main(){
        stack obj;
        obj.push(5);
        obj.push(6);
        obj.push(7);

        obj.print();


    }     