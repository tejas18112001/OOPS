public class IB_child extends Inheritance_Box {

    public double  weight ;
    IB_child(){
        this.weight = -1 ;

    }

    IB_child(double l , double w , double h , double weight) {
        super(l , w , h);  // call parents class constructor (Box)
        this.weight = weight ;
    }

    IB_child(IB_child obj) {
        super(obj) ;
        this.weight = obj.weight ;
    }


    private void Print() {
         System.out.println("This is IB_child class");
    }
    public static void main(String[] args) {
        
    }
}
