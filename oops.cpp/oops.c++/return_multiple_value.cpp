/*

Two way  to return more than two value :
1. call by reference
2. using class method ;


1. You can return only single value in a function .
2. But using pointers you can even return the two or more values 
3. call by reference : - when we pass a parameter to the function as a address , is known as call by reference 
                         It will make parement chage at address of that variable ;
4. call by value     :-  Passing the  value to  the function , is called call by value ;
                         Call by value make copy of the variable and make change in that variable 

*/

# include<iostream>
using namespace std ;


class MMinMax {
    public :
    int min , max ;
    
    MMinMax(int Min , int Max) {
        min = Min ;
        max = Max ;
    }

    void val(int arr[] , int size) {
        for(int i = 0 ; i<size ; i++) {
         if(min > arr[i] ) {
            min = arr[i] ;
        }
        if(max < arr[i]) {
            max = arr[i] ;

        }

        }
    }

} ;

int Min(int arr[] , int size) {
    int min = arr[0] ;
    for(int i = 0 ; i<size ; i++) {
        if(min > arr[i]) {
            min = arr[i] ;
        }
    }
    return min ;
}


int Max(int arr[] , int size) {
    int max = arr[0] ;
    for(int i = 0 ; i<size ; i++) {
        if(max < arr[i]) {
            max = arr[i] ;
        }
    }
    return max ;
}

void MinMax(int arr[] , int size , int *min , int *max) {
       for(int i = 0 ; i<size ; i++) {
        if(*min > arr[i] ) {
            *min = arr[i] ;
        }

        if(*max < arr[i]) {
            *max = arr[i] ;

        }
       }
}
int main(){

    int arr[] = {1,3,5,2,8 , 70 , -9} ;
    int size = sizeof(arr) / sizeof(arr[0]) ;
    int min  = arr[0], max = arr[0] ;
    // min = Min(arr , size) ;
    // max = Max(arr , size) ;
    
    // MinMax(arr ,size , &min ,&max) ;    // call by reference
    // cout<<"Min element: "<<min<<endl ;
    // cout<<"Max element: "<<max<<endl ; 

    MMinMax a(arr[0] , arr[0]) ;
    a.val(arr , size) ;
    cout<<"Min = "<< a.min<<endl;
    cout<<"Max = " <<a.max<<endl ;

    
    return 0 ;
}