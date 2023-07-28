package oops2;

/*
 * Note that static block is used to assign value to the static data 
 * for that we use static block which execute only once when the object of the class called first time
 * 
 * Following is the demostration
 * 
 * when create sb object -> that time onlt static{} -> execute
 * but when sb2 created that time  -> static{} block is not executed 
 * 
 * Noe that 
 * 
 * 
 */

public class StaticBlock {

     
    static int a = 10 ;
    static int b ;
    String name ;

     // This is run only first time when the  first object is created for first time
     static{
        System.out.println("I am in static block");
        b = a*2 ;
    }

    public static void main(String[] args) {

        
        StaticBlock sb = new StaticBlock() ;
        System.out.println(StaticBlock.a + " "+StaticBlock.b);
        StaticBlock sb2 = new StaticBlock() ;
        
        StaticBlock.b += 3 ;
        System.out.println(StaticBlock.a + " "+StaticBlock.b);

    }
}
