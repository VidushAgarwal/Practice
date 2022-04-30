import java.util.*;

public class stack {
    public static void main(String[] args) {

        //stack follows last in first out
        Stack<String> cars = new Stack<>();

        //enter elements into cars stack
        cars.push("mustang");
        cars.push("volvo");
        cars.push("mercedes a class");
        
        for(int i=0;i<5;i++)
            cars.push(String.valueOf(i*10));
        System.out.println(cars);

        System.out.println(cars.peek());

        System.out.println(cars.pop());

        System.out.println(cars);

        cars.pop();

        System.out.println(cars);
    }
}
