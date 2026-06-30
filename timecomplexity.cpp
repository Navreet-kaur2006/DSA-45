/*  #include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};   //O(1) as constants
    for(int i=0;i<5;i++){      // O(n)        
         // tym execution w.r.t input
        cout<<a[i]<<endl;
    }
}         */

// notation  =
// O(1)=constants
// O(n)                overall=o(n+1)  =  O(n)
// o(n^2)=

/*  #include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){      //O(n^2)  = try krna k n^2 ch complexity na jave
            cout<<"*";
        }
    
    cout<<endl;
    }
}  */

//O(log n)= input size decrease repeatedly
//linear  search 
/*  #include<iostream>
using namespace std;
int main(){
int a[5]={3,2,4,5,7};
int n;
int i ; 
bool res;
cout<<"enter n:"<<endl;
cin>>n;
for(i=0;i<5;i++){
    if(a[i]==n){
        res= true;
    break;
    }
    else{
        res = false;
    }
}

if (res == true){
    cout<<"element found at "<<i<<endl;
}else{
    cout<<"Element not found "; 
}

}         */


// binary search
/*  #include<iostream>
using namespace std;
int main(){
int n;
int arr[5]={2,3,4,6,7};
int start=0;
int end=sizeof(arr)-1;
int mid ;
int i ; 
bool res;
cout<<"enter n:"<<endl;
cin>>n;
while(start<=end){
    mid = start+end/2;

    if(arr[mid]==n){
       res= true;  
       break;
    
    }
    else if(n>mid){
        start=mid+1;
    }

    else{
        end=mid-1;
}

}

if (res == true){
    cout<<"element found at "<<mid<<endl;
}
else{
    cout<<"Element not found "; 
}
}   */




/*   #include<iostream>
using namespace std;
int main(){
int n;
int arr[7]={2,3,4,5,7,8,9};
int start=0;
int end=sizeof(arr)-1;
int mid ;
int i ; 
bool res;
cout<<"enter n:"<<endl;
cin>>n;
while(start<=end){
    mid = start+end/2;

    if(arr[mid]==n){
       res= true;  
       break;
    
    }
    else if(n>mid){
        start=mid+1;
    }

    else{                   //binary search
        end=mid-1;            //tc=o(log n)
}

}

if (res == true){
    cout<<"element found at "<<mid<<endl;
}
else{
    cout<<"Element not found "; 
}
} 
*/
