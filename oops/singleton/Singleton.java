package singleton;
/*
 * In singleton you have to create the object of the class only once 
 * Not more than once 
 * 
 * If you created the object of class 2nd time it will point to the first object reference only .
 */

public class Singleton {
    private Singleton() {

    }

    private static Singleton instance ;
    public static Singleton getInstance() {
        if(instance == null) {
            instance = new Singleton() ;
        }
        return instance ;
    }
}
