
package oops2;

public class Human {
    int age ;
    String name ;
    int salary ;
    long population  ;
    public Human(int age , String name , int salary) {
       this.name = name ;
       this.age = age  ;
       this.salary = salary ;
       this.population +=1 ;
    }

    public static void main(String[] args) {
        System.out.println("hellow World");
    }


}
