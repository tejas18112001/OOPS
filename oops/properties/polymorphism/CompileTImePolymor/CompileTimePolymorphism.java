package properties.polymorphism.CompileTImePolymor;

/*

    1) compile time / static polymorphism  -> acive via method overloading  (same class can have many methods of same name but
                                                                               the method return type / parameter pass to function
                                                                               may different .)

         ->>>>>>>>>>>>>>>> When we create construnctor considering different parameter then is compile time polymorphism


 */

public class CompileTimePolymorphism {
    void hellow() {
        System.out.println("Hellow");
    }

    void hellow(String s ) {
        System.out.println(s) ;
    }

    void hellow(String s1 , String s2) {
        System.out.println(s1 + s2) ;
    }

    public static void main(String[] args) {
        CompileTimePolymorphism obj  = new CompileTimePolymorphism() ;
        obj.hellow() ;
        obj.hellow("Hii") ;
        obj.hellow("Hellow" , " Friends") ;
    }
}
