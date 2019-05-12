public class Main{
	public static void main(String args[]){
		int max_so_far=0,max_end_here=0;
   		 int[] a={-2,-3,4,-1,-2,1,5,-3};
   		 for(int i=0;i<a.length;++i){
       			 max_end_here += a[i];
       			 if(max_end_here < 0){
            			max_end_here = 0;
       			 }else if(max_so_far < max_end_here){
           			 max_so_far = max_end_here;
       			 }
   		 }
   		 System.out.println(max_so_far);
   		 
	}
}
