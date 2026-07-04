 /*  #include<iostream>
using namespace std;                               // Bubble sort                             ALGORITHM:- BUBBLE SORT
int main(){                                                                            // 1. start                                                                                           //
    int arr[7]={4,5,6,7,2,1,3};                                                        //2. initialize the value of n, the no. of elements of an array
    int n=7;                                                                           // 3. bool res
                                                                                       //i=0
                                                                                       loop srat
    int i,j;                                                                           //4. apply for loop from i=0 to i<n-1 to check the res is false or not.
    bool res;                                                                          // 5. apply second for loop from j=0 to j<n-1 and check if the element arr[j]<arr[j+1] or not.
    for( i=0;i<n-1;i++){                                                               //6. if step 5 is correct both no.s gets swaped
        res=false;                                                                     //7.but if res=false the loop will break
        for( j=0;j<n-i-1;j++){                                                         // 8. then print final sorted array using for loop 
            if(arr[j]>arr[j+1]){
                swap (arr[j],arr[j+1]);               // res == for sorted array  
              res=true;
            }
        }
        if(res==false){
            break;
        }
    }
    for(int r=0;r<=n-1;r++){
        cout<<arr[r];
    }
}   */


/*  #include<iostream>                                                                // ALGO:- SELECTION SORT 
using namespace std;                                                              //1. start
int main(){                                                                       // 2. initialise n, thr no. of elements in an array
    int arr[5]={5,3,8,7,2};                                                       //3.apply a for loop to get the value of minimum index in each iteration
    int n=5;                                                                      //4. apply a second for loop to check if the arr[j]<arr[minidx], if condition is true then minidx=j
    int i,j;                                                                      //5.then if condition corrects swap the elements of arr[j]and arr[minidx].
    for( i=0;i<n-1;i++){                                                          // 6. then print the final sorted array using a for loop. 
        int minidx=i;                                                             
        for( j=i+1;j<n;j++){                                                       
            if(arr[j]<arr[minidx]){                                               
                minidx=j;                                                         
            }                                                                     
        }
    swap(arr[i],arr[minidx]);
    }
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
}
    */


/* #include<iostream>                                      // Merge sort
using namespace std;

void merge(int arr[],int start,int mid,int end){
    int n1=mid-start+1;
    int n2=end-mid;

    // temp arrays
    int s[n1],e[n2];

    for(int i=0;i<n1;i++){
        s[i]=arr[start + i];
        for(int j=0;j<n2;j++){
            e[j]=arr[mid+1+j];
        }
    }

    int i=0;          // index for left 
    int j=0;          // index for right
    int k=start;  
    while(i<n1&& j<n2){
        if(s[i]<=e[j]){
       arr[k]=s[i];
       i++;
        }
        else{
            arr[k]=e[j];
            j++;
        }
        k++;
    }    
// copy remainig elements of s[i]
    while(i<n1){
        arr[k]=s[i];
        i++;
        k++;
    }

    //copy remaining elements of e[j]
    while(j<n2){
        arr[k]=e[j];
        j++;
        k++;
    }
}

void mergesort(int arr[],int start,int end){
        if(start<end){
            int mid=(start+end)/2;
        
            //sort first half
            mergesort(arr,start,mid);

            //sort  second half 
            mergesort(arr,mid+1,end);

         // merge the sorted array
        merge(arr,start,mid,end); 
        }
        }


// Main function
int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);


    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    mergesort(arr, 0, n - 1);

    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";

    }
        

    return 0;
}

*/



