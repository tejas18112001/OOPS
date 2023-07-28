/*
 *  class :- 1) It is basically an logical construct .
 *           2) Template with some properties (data types)
 *           3) It is templates for a object
 * 
 * Object :-  1) It is a actual physical stuff , store in memory
 *            2) Object is instace of a class 
 *            3) Object is physical entity that follow some rule of class
 * 
 * Primitive Data tupe like int  , float , double are not actually object so we not use new keyword 
 * Ex int x  ;   ➡ x is int type variable which is store in stack
 *    int x = 10 ; ▶ here 10 is object created and it is store in heap and variable is in stack ;
 * 
 * 
 * 
 * Compile time  : - Code is converting to bites / Machine level language
 * Runtime    :-    Compile code is not in running state in CPU . and memory allocated to it
 * 
 * 
 * Constructure in oops :-  Constructure define what happen when the object is created ;
 * 
 * 
 */


class basic {

    public static void main(String[]args) {
       Student tejas   = new Student(3 , "Tejas" , 87) ;
      //compile time               // runtime stuff
    //    System.out.println(tejas) ;
        System.out.println(tejas.roll_no);   // defaults value for int is 0
       System.out.println(tejas.name);         // defauls value for String is null
       System.out.println(tejas.marks);        // defauls values for float is 0.0


        Student yogesh = new Student()   ;
        yogesh.name = "Yogesh" ;
        yogesh.marks = 23; 
        yogesh.roll_no = 35 ;

        System.out.println("Name : " + yogesh.name+"\n"+"ROll NO. : "+yogesh.roll_no+"\n"+"MARKS :" + yogesh.marks+"\n" ) ;
        
        Student Other  = new Student(yogesh) ;
        System.out.println("Name : " + Other.name+"\n"+"ROll NO. : "+Other.roll_no+"\n"+"MARKS :" + Other.marks+"\n" ) ;



        // call constructor from another constructor ;

        Student New = new Student() ;  
        System.out.println("Name : " + New.name+"\n"+"ROll NO. : "+New.roll_no+"\n"+"MARKS :" + New.marks+"\n" ) ;
     
        Student one = new Student() ;
        Student two = one;

        // Here two is not copy of one object but actually two is reference to same object where one is pointing in heap
        one.name = "Something name " ;
        System.out.println(two.name);
        

    }

} ;

class Student {
    
    int roll_no ;
    String name ;
    double marks  ;

    Student(int roll_no , String name , int Marks) {
       this.roll_no = roll_no ;
       this.name  = name ;
       this.marks = Marks ; 
    // compiler convert that Marks to double from int
    // basically type casting dding here
    // here compiler did type casting

    }

    Student(Student other) {      
        this.name = other.name ;
        this.roll_no = other.roll_no ;
        this.marks = other.marks ;
    }

    Student() {
        // call constructor from another constructor
        // internally it is like : - Student(100, "Default Name" , 100) ;
        this(100, "Default Name" , 100) ;
    }

    //Call constructor from another constructor 👆 

    


    
} ;

