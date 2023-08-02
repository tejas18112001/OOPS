package innerClass;

public class InnerClass {

    static class Test {
    String name; 
    Test(String name) {
        this.name = name ;
    }

}
    public static void main(String[] args) {
       
        Test t = new Test("Tejas") ;
        Test t1 = new Test("Suraj") ;
        System.out.println(t.name);
        System.out.println(t1.name);
    }
}
