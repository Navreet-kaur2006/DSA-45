#include<iostream>                            // HASHMAP
#include<map>
using namespace std;
int main(){
    map<int,int>data;
    data[1]=1;
    data[2]=3;
    data[3]=4;
    data[4]=7;

    map<string,int,greater<string>>marks;       // ,greater<string> for descending order
    marks["naina"]=95;
    marks["arya"]=92;
    marks["vivan"]=86;
    marks["avyan"]=94;

   /* for(auto element:marks){                 // here marks is iterator          (auto)-bnya bnaya iterator a 
        cout<<"Name-" <<element.first;
        cout<<"  marks- "<<element.second<<endl;
    }
       */

    map<string,int>value;
}