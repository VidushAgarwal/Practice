import java.util.*;
public class iterator{
    public static void main(String args[]){

        //other way of creating an arraylist
        ArrayList<Integer> ls=new ArrayList<>();
        for(int i=0;i<5;i++)
            ls.add(i*10);

        //creating iterator object, it iterates elements through list instead of index
        Iterator<Integer> it=ls.iterator();
        System.out.println(it.hasNext());

        //running loop in iterator
        while(it.hasNext()){
            System.out.println(it.next());
        }

        //.next shifts iterator to next element thus moving one step ahead
        //after while loop has confirmed that there is no next element .hasnext now will print false
        System.out.println(it.hasNext());
        System.out.println();
    }
}
