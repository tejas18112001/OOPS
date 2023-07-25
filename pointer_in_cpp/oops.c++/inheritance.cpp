#include<iostream>
using namespace std ;


/* 

1. two object of same name not possible because it is confliting error
  Every inheritance by default is private
  to access any method of parent class by object of its child class , the inheritance needs to 
  public first .

  so declare that inheritance public 
  Ex .   
      class tejas : RautFamily {  // this is private inheritance 

      } ;

      class tejas : public RautFamily {  //this is public inheritance 
                 // you can access ,ethods of parent class by using the objects of the tejas class
      } ;


*/
class promotion {
   
   public :
  virtual void Isgetpromotion() = 0 ;
  
} ;

class Employee : promotion {   // employee class inherited from promotion ;
    private :
    string company ;
    int age ;
    // string name  ;
    protected :
    string name  ;
    

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


class developer : public Employee {
   string codeLanguage ;
   public :
   developer(string Name , string Company , int Age , string codeLanguage):Employee(Name , Company , Age)
   {
      this->codeLanguage = codeLanguage ;
   }
   void fixBug() {
    cout<<name<<" fixed this bug using "<<codeLanguage<<endl ;
   }
} ;

class teacher : public Employee {

    string subject ;
    public :
    teacher(string Name , string Company , int Age , string Subject)
    :Employee(Name , Company , Age) 
    {
        subject  = Subject ;
    }
    void PrepareLesson() {
        cout<<name<<" is preparing "<<subject<<" lesson"<<endl ;
    }
};
int main() {
//    Employee e1("Tejas" , "Amazon" , 21) ;
//    Employee e2("Suraj" , "Air-Force" , 22) ;


    developer d("Suraj" , "Amazon" , 25 , "c++") ;
    teacher t("Tejas" , "Amazon" , 45 , "Basic java") ;
    d.Isgetpromotion() ;
    
  
   


}