package properties.inheritance;

// Here we will see properties.inheritance based on box example
public class Inheritance_Box {

          public double l ;
          public double w ;
          public double h ;

          Inheritance_Box() {
            this.l = -1 ;
            this.w = -1 ;
            this.h = -1 ;
          }

          Inheritance_Box(double l , double w , double h) {
            this.l = l ;
            this.w = w ;
            this.h = h ;
          }

          Inheritance_Box(Inheritance_Box obj) {
            this.l = obj.l ;
            this.w = obj.w ;
            this.h = obj.h ;
          }




    public static void main(String[] args) {
       
    }
}
