#include<iostream>
using namespace std ;

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
   void introduceEmployee() {
        cout<<"Name :"<<name<<endl ;
        cout<<"Company : "<<company<<endl ;
        cout<<"Age : "<<age<<endl;

    }
    void Isgetpromotion() {
        if(age > 30) {
            cout<<name<<" , you are promoted!"<<endl ;
        }else {
            cout<<name<<" , you have to work hard. "<<endl ;
        }
    }
    // void introduceEmployee() {
    //     cout<<"Name :"<<name<<endl ;
    //     cout<<"Company : "<<company<<endl ;
    //     cout<<"Age : "<<age<<endl;

    // }

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

    virtual void work() {
        cout<<name<<" ,reading the mail and finding the work catalog to work in the company"<<endl;
    }
} ;



class engineer {

} ;


class developer : public Employee  , public engineer {
   string codeLanguage ;
   public :
   developer(string Name , string Company , int Age , string codeLanguage):Employee(Name , Company , Age)
   {
      this->codeLanguage = codeLanguage ;
   }
   void fixBug() {
    cout<<name<<" fixed this bug using "<<codeLanguage<<endl ;
   }

   void work() {
    cout<<name<<" , trying to fixed the bugs"<<endl;
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

    void work() {
        cout<<name<<" your work is teaching"<<endl;
    }
};
int main() {



    developer d("Suraj" , "Amazon" , 25 , "c++") ;
    teacher t("Tejas" , "Amazon" , 45 , "Basic java") ;
 
    Employee *r = new Employee("Rameshwar" , "Bajaj" ,45 ) ;
    Employee *s = &t ;
    r->introduceEmployee() ;
    // s->work() ;


}