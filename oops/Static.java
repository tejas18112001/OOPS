/*
 * 
 * Note that in  Static basically is a keyword which indicate that the method or variable which used static 
 * is not object depedents
 * It can be access without creating object of that class
 * 
 * Everything non-static you creating in main (Also static function)  needs to have the object
 * otherwise it will give error 
 * 
 * 
 * non-static inside non-static method can be used  because you have to create the object of that non static method
 * inside the static main method
 */

import  oops2.Human;
public class Static {
    public static void main(String[] args) {
        Static st = new Static() ;
        st.greeting2();
        Human h = new Human(23 , "Tejas" , 23) ;
    }

    static void fun() {
        // greeting2() ;
    }


     void greeting2() {
        greeting() ;
      }
    void greeting() {
        System.out.println("Hellow EveryOne");
    }
}
