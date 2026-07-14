#include<iostream>
using namespace std;

class hash{
    public:



};

int main(){
    int size=10;
    int hashtable[size];
    for(int i=0;i<size;i++){
        hashtable[i]=-1;
    }

    int n ; 
    cout<<"enter the number of elements you want to add - "; 
    cin>>n; 

    for(int j=0;j<n;j++){  
        int ele ;                           //linear probing 
        cout<<"enter element: ";
        cin>>ele;
        int i = ele%size; 
        while(hashtable[i]!=-1){               // for collision 
            i= (ele + i )%size ; 
            i= i++; 
        }

        hashtable[i]=ele;
    }    

    for(int k=0;k<size;k++){
        cout<<hashtable[k]<<"->";

    }


}