import java.util.*;
public class deque {
    public static void main(String[] args) {
        ArrayDeque<Integer> adq=new ArrayDeque<>();
        adq.offer(4);
        adq.offerLast(1);
        adq.offerFirst(3);
        System.out.println(adq);

        System.out.println(adq.peek());
        System.out.println(adq.peekFirst());
        System.out.println(adq.peekLast());

        System.out.println(adq);
        System.out.println(adq.pollFirst());
        System.out.println(adq.pollLast());
        adq.offer(10);
        System.out.println(adq.poll());
    }
}
