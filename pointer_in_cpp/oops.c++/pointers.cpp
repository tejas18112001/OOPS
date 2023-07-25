// #include<iostream>
// using namespace std ;
// /*  
//   Pointer :- basically used to store the address of the variable ;
//  if you are storing a int variable in a pointer that pointer needs to be of int data type 

//  void pointer .
  
// */
// void printChar(char *ptr) {
//     cout<<*ptr<<endl ;
// }

// void print(void*ptr , char ch) {
//     switch(ch){
//         case 'i' : cout<<*((int*)ptr)<<endl ;break; 
//         case 'c' : cout<<*((char*)ptr)<<endl ;break ;

//     }
// }

// int main() {

//     int a = 10 ;
//     char ch = 'c' ;
//     // int *ptr1 = &a ;
//     // char *ptr2 = &ch ;
//     print(&ch , 'c') ;
//     print(&a , 'i' ) ;
   
//     return 0 ;
// }



#include<iostream>
using namespace std ;

void arr1(int *arr ){
     for(int i = 0  ; i<4 ; i++)
     cout<<arr[i]<<" " ;
}


int main() {

    int arr[] = {1,2,3,4} ;
    cout<<arr<<endl ;
    cout<<&arr<<endl ;
    cout<<&arr[0]<<endl;
    cout<<&arr[2]<<endl;
    // arr1(arr) ;

    return 0 ;
}