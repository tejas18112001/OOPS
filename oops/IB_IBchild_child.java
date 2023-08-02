public class IB_IBchild_child extends IB_child {
     public double boxPrice ;

     IB_IBchild_child() {
        super() ;
        this.boxPrice = 0 ;
     }

     IB_IBchild_child(double boxPrice , double l , double w , double h , double weight){
          super(l , w , h , weight) ;
          this.boxPrice = boxPrice ;
     }

     IB_IBchild_child(IB_IBchild_child obj) {
        super(obj) ;
        this.boxPrice = obj.boxPrice ;
     }


}
