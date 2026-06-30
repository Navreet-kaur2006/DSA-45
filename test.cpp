// 1) O(1)==O(n)
// 2) O(n)
// 3) Sorted
// 4) binary search


//  SECTION 2:ARRAYS

// 5) 0
// 6) 3 rows, 4 columns
// 7) 10
// 8) Switch== for



// SECTION 3:LOOPS

// 9) for== do while
// 10) 012
// 11) continue
// 12) break


// SECTION 4: RECURSION

// 13) Base case
// 14) 321
// 15) stack
// 16) O(log n)


// SECTION 5 : PATTERNS & MIXED

// 17) (D)==(a)
// 18) %
// 19) for
// 20) binary search


// PART B

// 1 question


#include<iostream>
using namespace std;
int main(){
int a[5]={10,20,30,40,50};
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
    cout<<"element found at index  "<<i<<endl;
}else{
    cout<<"Element not found "; 
}

}      

// 2 question

/*   #include<iostream>
using namespace std;
int main(){
int n;
int arr[7]={2,5,8,12,15,20,25};
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
} 
   */

   //4 question



/*   #include<iostream>
using namespace std;
int main(){
    int a[3][3];
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"enter number for row "<<i<<" column "<<j<<endl;
            cin>>a[i][j];
        }
        cout<<endl;

    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+a[i][j];
        
          
           
        }
        
}

cout<<"sum is:"<<sum;

}   */

//5 ques

/*   #include<iostream>
using namespace std;
int main(){


    for(int i=1;i<=5;i++){
for(int j=1;j<=i;j++){
cout<<"*";
}
cout<<endl;
}

}
*/

// 6) question

// a) = O(n)
// b) = O(n^2)
// c) =  O(n)
// d) = O(n)