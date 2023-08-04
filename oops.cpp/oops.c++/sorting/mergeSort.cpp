
#include<iostream>
using namespace std; 


void mergeSort(int *arr , int s , int e) {
    int mid = s + (e-s)/2 ;
    int len1 = mid-s+1;
    int len2 = e-mid ;
    int *left1 = new int[len1] ;
    int *left2 = new int[len2] ;
    int startingIndex = s ;
    for(int i = 0 ; i<len1 ; i++) {
        left1[i] = arr[startingIndex++] ;
    }

     startingIndex = mid+1 ;
     for(int i = 0; i<len2 ; i++) {
        left2[i] = arr[startingIndex++] ;
    }

    startingIndex = s ;
    int i = 0  , j = 0;
    while(i < len1 && j < len2) {
        if(left1[i] < left2[j] ) {
            arr[startingIndex++] = left1[i++] ;
        }else {
            arr[startingIndex++] = left2[j++] ;
        }
    }

    while(i<len1) {
         arr[startingIndex++] = left1[i++] ;
    }

    while(j<len2) {
        arr[startingIndex++] = left2[j++] ;
    }



}


void merge(int *arr , int s , int e) {
    if(s>=e) return ;

    int mid = s + (e-s)/2 ;
    merge(arr ,s , mid) ;
    merge(arr , mid+1 , e) ; 
    mergeSort(arr , s,e) ;
}
int main() {
    
    int arr[5] = {3,2,6,1,4} ;
    int s = 0 , e = 4 ;
    merge(arr , s, e) ;

    for(int i = 0 ; i<5 ; i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}