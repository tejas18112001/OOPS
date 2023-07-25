/*
NOTE : 
1.   Name of the array is the address of first element of the array
[n]  in array used to dereference the element at position n at that address

2. In c++ you can even acces the memory location that does not belongs to your array 
  Ex . int arr[] = {1,2,3,4} ;
       cout<<arr[6]<<endl;       ->>>>>>this will give some dummy location of memory 
*/

#include<iostream>
using namespace std ;
// note that  : array is pointer note that
void arr1(int *arr ){
    //  for(int i = 0  ; i<4 ; i++)
    //  cout<<arr[i]<<" " ;

    cout<<*arr<<endl;
}


int main() {

    int arr[] = {1,2,3,4} ;
    int val = 4 ;
    int *ptr = &val;
    cout<<*(arr + 4)<<endl;
    cout<<arr[6]<<endl;
    // arr1(arr) ;
    
    return 0 ;
}