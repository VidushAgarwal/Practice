import java.util.*;
public class queue {
    public static void main(String[] args) {
        Queue<Integer> queue=new LinkedList<>();
        for(int i=0;i<5;i++)
            queue.offer(i);
        System.out.println(queue);
        queue.add(2);
        System.out.println(queue.poll());

        System.out.println(queue);

        System.out.println(queue.peek());

        System.out.println(queue.remove(2));
        System.out.println(queue);
    }
}