#include<iostream>
using namespace std ;


/* 
  Abstraction :
  Basically it is a property by which we can make a abstract .
  We can abstract the methods , property of that class and for this we have to make the methods of the classs
  to be virtual . 
  ie that methods going to implement in inherited function


*/
class promotion {
   
   public :
  virtual void Isgetpromotion() = 0 ;
  
} ;

class Employee : promotion {   // employee class inherited from promotion ;
    private :
    string name , company ;
    
    int age ;

    public :
   
    void Isgetpromotion() {
        if(age > 30) {
            cout<<name<<" , you are promoted!"<<endl ;
        }else {
            cout<<name<<" , you have to work hard. "<<endl ;
        }
    }
    void introduceEmployee() {
        cout<<"Name :"<<name<<endl ;
        cout<<"Company : "<<company<<endl ;
        cout<<"Age : "<<age<<endl;

    }

    void setName(string name) {
        this->name = name ;
    }

    string getName() {
        return name ;
    }
    void setAge(int age) {
        this->age = age ;
    }

    int getAge() {
        return age ;
    }

    void setCompany(string Company) {
        company = Company ;
    }

    string getCompany() {
        return company ;
    }

    Employee(string Name , string Company , int Age) {
        name = Name ;
        company = Company ;
        age = Age ;

    }
} ;
int main() {
   Employee e1("Tejas" , "Amazon" , 21) ;
   Employee e2("Suraj" , "Air-Force" , 22) ;
//    e1.introduceEmployee() ;
    e2.setAge(32) ;
    // cout<<e1.getName() <<" age is "<<e1.getAge();
    // promotion p ;
    // p.Isgetpromotion() ;
    e1.Isgetpromotion() ;
    e2.Isgetpromotion() ;

    




}