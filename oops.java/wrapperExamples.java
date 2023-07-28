
/*
 * Java  is Pass by value 
 * 
 */

public class wrapperExamples {
    public static void main(String[]args) {
        int a = 10 ;
        int b = 20 ;       // b is not an object it is primitive data type 
        Integer num = 30 ; // num is the object of integer type class ;
        swap(a ,b) ;
        System.out.println(a+" "+b) ;      
        // here a and b is not swap because a and b are pass by value  - > Java is passed by value

    }


    static void swap(int a , int b) {
         int temp = a ;
         a = b ;
         b = a ;
    }

}


