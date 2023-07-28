public class final_keyword {
    public static void main(String[]args) {
          
        final int a = 20 ; 
        // a = 30 ;
        // this give erroe -> final not a;;ow to odify the value once declare ;
        

        final A tejas = new A("Tejas Raut") ; 
        tejas.name = "Other Person Name" ;
        A New = new A("Other name") ;  
        // tejas = New ; 
        /*
         *   tejas = New 
         *  This giving error because final keyword  make object reference immutable but you can chane value 
         *   using that object .
         * 
         * final keyword make a variable immutable of primitive data type 
         * if it is object or Referenced type then final make reference to that variable immutable but we can chage the 
         * value
         * 
         * 
         * 
         * 
         * Garbage collctor used to clear grabage in the memory
         * One reference varisble point at only one reference at a time not more than that
         * 
         */


         A obj   ;
         for(int i = 0 ; i<1000000000; i++) {
            obj = new A("new name") ;
         }




    }
}

class A {
    String name ;
    public 
    A(String name) {
       this.name = name ;
    }
    
 @Override  
   public  void finalize()   
    {   
        System.out.println("finalize method called");   
    }   
    
}
