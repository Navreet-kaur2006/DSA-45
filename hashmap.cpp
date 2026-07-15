/* #include<iostream>                            // HASHMAP
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

   // for(auto element:marks){                 // here marks is iterator          (auto)-bnya bnaya iterator a 
      //  cout<<"Name-" <<element.first;
       // cout<<"  marks- "<<element.second<<endl;
    //}
       

    map<string,int>:: iterator itr;                           //ethe iterator khud bnaya

    for(itr=marks.begin();itr!=marks.end();itr++){
        cout<<"Name-  "<<itr->first;
        cout<<" value-"<<itr->second<<endl; 
    }


}*/ 




// QUESTION: array has multiple elments duplicates are also allowed u have to calculate the sum of repititive digits

#include<iostream>
#include<map>
using namespace std;
int main(){

    int arr[5]={1,3,9,1,9};
    map<int,int>freqmap;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        freqmap[arr[i]]++;

    }

     int sum=0;
    for(auto element:freqmap){                 
    //cout<<element.first<<"-"<<element.second<<endl;
      if (element.second>1){
        sum=sum+element.first;

      }

}
   cout<<sum;
}