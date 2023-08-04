package properties.polymorphism.RuntimePolymorphism;


/*
   Act of representing the single thing in many way is polymorphism

   Types of polymorphism :-

     1) Run time polymorphism :  This polymorphism during run time of code .
                                  (When code is loded in memory) ->> different class have same method of same name )

        ->>>>>>>>>>>>>>>>> Implementation of Main class is runtime polymorphism
 */
public class Main {
    public static void main(String[]args) {
        Shape shape = new Shape() ;
        Shape circle = new Circle() ;
        Shape square = new Square() ;
        Shape triangle = new Triangle() ;
        shape.area();
        circle.area() ;
        circle.formula();

    }
}
