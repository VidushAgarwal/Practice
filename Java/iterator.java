import java.util.*;
public class iterator{
    public static void main(String args[]){
        ArrayList<Integer> ls=new ArrayList<>();
        for(int i=0;i<5;i++)
            ls.add(i*10);
        Iterator<Integer> it=ls.iterator();
        System.out.println(it.hasNext());
        while(it.hasNext()){
            System.out.println(it.next());
        }
        System.out.println(it.hasNext());
        System.out.println();
    }
}
