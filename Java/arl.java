import java.util.*;
public class arl{
    public static void main(String args[]){
        System.out.println();
        Scanner sc=new Scanner(System.in);
        List<Integer> ls=new ArrayList<>();
        for(int i=0;i<4;i++){
            ls.add(i*10);
        }
        System.out.println(ls);
        ls.add(1,5);
        System.out.println(ls);
        ls.remove(Integer.valueOf(20 ));
        ls.set(2 ,100);
        System.out.println(ls);
        System.out.println(ls.contains(100));
        ls.clear();
        System.out.println(ls);
    }
}