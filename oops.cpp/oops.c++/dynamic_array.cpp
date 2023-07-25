#include<iostream>
using namespace std ;
// lets created multidimensional dynamic array ;
/*

    let (table) be a pointer   pointing to the table [] array (having address of each table ) 
    ex. 
    **table = (address of table array) 
                     0      1       2
    *table array = [00AA , 00ASD , 00HFF ]  -> this are the address of tables
    00AA ->  [1,2,3,4]
    00ASD->  [       ]
    00HFF -> [       ]
*/
int main() {
    int rows = 3, cols = 3 ;

    int **table ;
    table = new int *[rows] ;
    for(int i = 0 ; i<rows ; i++) {
        table[i] = new int[cols] ;
    }
  
       
}