//import collections using *
import java.util.*;
public class arraylist{
    public static void main(String args[]){
        
        //create arraylist object, there are two ways to do so, other way is in iterator.java file
        List<Integer> ls=new ArrayList<>();

        //adding elemennts to the arraylist
        for(int i=0;i<4;i++){
            ls.add(i*10);
        }
        System.out.println(ls);

        //adding an element to an index otherwise it will add to the end
        ls.add(1,5);
        System.out.println(ls);
        
        //removing an integer through value and then changing value of a given index(2) with given element(100)
        ls.remove(Integer.valueOf(20 ));
        ls.set(2 ,100);
        System.out.println(ls);
        
        //getting element at a specific index
        System.out.println(ls.get(2));
        
        //checking if list contains specific element
        System.out.println(ls.contains(100));
        
        //foreach loop!! alternative of for loop, in this an element iterates through the list itself
        //in normal for loop, index iterates
        for (Integer i : ls) {
            System.out.print(i+" ");
        }
        
        //clears the whole lisst
        ls.clear();
        System.out.println("\n"+ls);
    }
}