#include<iostream>
#include<queue>

using namespace std;
class dequeue{
    public:
    queue<int>q1;

    void push(int val){
        q1.push(val);
    }

    void pop(){
        q1.pop();
    }

    void print(){
        if(q1.size()==0){
            cout<<"queue is empty";
        }

        else{
            while(!q1.empty()){
                cout<<q1.front()<<" "; 
                q1.pop();
            }
        }


    }
};
int main(){
    dequeue obj;
    obj.push(5);
    obj.push(7);
    obj.push(8);

   obj.pop();

    obj.print();
}
