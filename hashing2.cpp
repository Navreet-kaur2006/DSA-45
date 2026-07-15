/* #include<iostream>
#include<list>
#include<vector>

using namespace std;                                          // hw:-1). searching in hashing

class hashtable{
    public:
    int tablesize ; 
    vector<list<int>> table ; 

     // constructor
    hashtable(int size){

        tablesize=size;
        table.resize(tablesize);
    }

    void add(int val){
        int key= val % tablesize;
        table[key].push_back(val);                    //chaining
        


    }
    void del(int d){

    }

    void search(int s){


    }
};

int main(){





}   */


#include<iostream>                                //searchin in hashing
using namespace std;

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
        int ele ;                           
        cout<<"enter element: ";
        cin>>ele;
        int i = ele%size; 
        while(hashtable[i]!=-1){                 
            i= (ele + i )%size ; 
            i= i++; 
        }

        hashtable[i]=ele;
    }    

    for(int k=0;k<size;k++){
        cout<<hashtable[k]<<"->";

    }
   int target;                                // searching code
   cout<<"enter target element:";
   cin>>target;
   bool res;
   for(int s=0;s<size;s++){
    if(hashtable[s]==target){
        res=true;
    }
   }
   if(res==true){
    cout<<"element is found";
   }
   else{
    cout<<"element not found";
   }
}
