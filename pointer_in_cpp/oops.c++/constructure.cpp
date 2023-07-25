#include<iostream>
using namespace std ;
//what is OOPS , class , object
// class properties ;
// attributes of a class by default are priveate
// what is constructure (default , user made , calling a constructure)
// access modifier in class
class Employee {
    public:
      string name , company ;
      int age ;
 
      void introduction() {
        cout<<"Name : "<<name<<endl;
        cout<<"company : "<<company<<endl;
        cout<<"Age : "<<age<<endl;
        
      }

      Employee(string name , string company , int age) {
            this->name = name ;
            this->company = company ;
            this->age = age ;
      }

} ;



int main() {
     Employee E1 ("sunil" ,"amazon" ,15) , E2("Tejas" ,"VIIT" , 13 );
    //  E1.name = "Tejas" ;
    //  E1.age = 13 ;
    //  E1.company ="VIIT" ;
     E2.introduction() ;

    //  E2.name = "Sunil" ;
    //  E2.age = 15 ;
    //  E2.company = "HCL";
    //  E2.introduction();
     
     
}