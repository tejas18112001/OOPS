#include<iostream>
using namespace std ;

/*
   Encapsulation -> We capsulate our atributes and method to used outside the class ;
   Anyone ca geet and set the value of attribute of class but using methods


   encasulation -> done using getter and setter methods

*/ 

class Employee {
    private :
    string name , company ;
    int age ;

    public :
   

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
    e1.setAge(22) ;
    cout<<e1.getName() <<" age is "<<e1.getAge();

}