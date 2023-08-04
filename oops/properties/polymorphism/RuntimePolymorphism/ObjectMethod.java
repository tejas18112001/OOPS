package properties.polymorphism.RuntimePolymorphism;

public class ObjectMethod {
    int a ;
    ObjectMethod(int a) {
        this.a = a ;
    }
    public static void main(String[] args) {
        ObjectMethod obj = new ObjectMethod(3) ;
        System.out.println(obj);
    }
}
