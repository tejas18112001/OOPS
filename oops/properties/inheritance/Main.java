package properties.inheritance;

/*

1. TYPES OF INHERITANCES :
      A) Single Inheritance
      B) Multilevel Inheritance
      C) Multiple Inheritance ( Not supported in java but can do using interfaces)
      D) Hierichical Inheritance
 * Multiple properties.inheritance is not supported in java
 * 
 * Implement using interfaces
 */



public class Main {
    public static void main(String[] args) {
//         Inheritance_Box obj1 = new Inheritance_Box() ;
//         System.out.println(obj1.h + " "+obj1.l + " "+obj1.w);
//         Inheritance_Box obj2 = new Inheritance_Box(3.1 , 3.44 , 3.5) ;
//         System.out.println(obj2.h + " "+obj2.l + " "+obj2.w);
//         Inheritance_Box obj3  = new Inheritance_Box(obj1) ;
//         System.out.println(obj3.h + " "+obj3.l + " "+obj3.w);

        IB_child obj1= new IB_child(3.2 , 4.3 , 5.5 , 3.2) ;
        System.out.println(obj1.h + " "+obj1.l + " "+obj1.w + " "+obj1.weight);


         Inheritance_Box obj2 = new IB_child(3.2 , 4.3 , 5.5 , 5.6) ;
         System.out.println(obj1.h + " "+obj1.l + " "+obj1.w + " "+obj1.weight);
        

          IB_IBchild_child obj4 = new IB_IBchild_child();      // Multilevel Inheritance
          IB_IBchild_child obj3 = new IB_IBchild_child(obj4) ;
          System.out.println(obj3);
    }

        
    
}
