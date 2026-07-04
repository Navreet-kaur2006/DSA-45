//recursion= on repeat , Backtracking ,function calling , base case

/*  #include<iostream>
using namespace std;

void printnums(int n){
    if(n==0){
        return ;
    }
    else{
        printnums(n-1);
        cout<<n<<"";
    }
}

    int main(){
        printnums(5);
    } */
        

//factorial = 5!=5*4*3*2*1
//base case -if n==1 -> return n
//else- n*fact(n-1)


/*  #include<iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1 ;
    }
    else{
        return n * factorial(n-1);
      
    }
}
 
int main(){
    cout<<factorial(5)<<"";
     
}  */



/*  binary search
                                
#include<iostream>                       //    ALGO:- BINARY SEARCH
using namespace std;                     //1. declare a function named binary(int n). 
                                         // 2. apply if condition within that function that if n=mid then return mid.
int binary(int n){                       //3.  elseif n<mid then return end = mid-1
    if (n==mid){                         //4.  else return start= mid+1
        return mid;                      // 5. then in int main,
    }                                    //6. declare an array , initialize start and end.
    elseif(n<mid){                       //7.then initialize mid=start +end/2
       return z=mid-1;                   //8. then apply a for loop to call the function
                                         // 9.then print the index where particular element is found according to your input
    }                                    // 10. stop
    else{
        return a=mid+1;
    }
    }



int main(){

    int arr[5]={2,4,6,8,10};
    int a;
    cout<<"start is:"<<a<<endl;
    cin>>a;
    int z;
    cout<<"end is:"<<z<<endl;
    cin>>z;
    int mid=a+z/2;
    int i;
    

    for(i=a;i<=z;i++){
 
        cout<<binary(6)<<"";


    }
    cout<<"element found at index:"<<i<<endl;

}
*/


// binary search using recursion

/*  #include<iostream>
using namespace std;

int binary(int arr[],int start, int end, int target){

    if(start>end){
        return -1 ;
    }
    int mid = (start+end)/2;
    if(arr[mid]==target){
        return mid; 
    }
    if(arr[mid]>target){
        binary(arr,start,mid-1,target);
    }else{
        binary(arr,mid+1,end,target);
    }
}






int main(){

    int arr[5]={1,2,3,4,5};
    int target;
    cout<<"enter target:";
    cin>>target;
    int result = binary(arr,0,sizeof(arr[0]/sizeof(arr)),target); 
    
    if (result == -1){
        cout<<"element not found";
    }
    else{
        cout<<"element found at"<<result;
    }
}
    */


    // fibbonacci series using recursion

    #include<iostream>
    using namespace std;

    int fibbo(int n){                        //steps:-  1. declare a fun for fibo series

        if(n<=1){                             // 2.Apply if condition(n<=1)
            return n;                         // 3. if  condition statisfies return n
        }
        else{                                 // 4. if not then return fibo(n-1)+fibo(n-2)
            return fibbo(n-1)+fibbo(n-2);
        }


    }


    int main(){
        int n;                                             
        cout<<"how many numbers of fibbo series u want:";    // 5.pass no.of fibo series u want 
        cin>>n;

        for(int i=0;i<n;i++){                     // 6.apply for loop to call the function
            cout<<fibbo(i)<<endl;
        }
    }






