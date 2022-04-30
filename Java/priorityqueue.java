import java.util.*;
public class priorityqueue {
    public static void main(String[] args) {
        Queue<String> pq=new PriorityQueue<>();
        pq.offer("e");
        pq.offer("a");
        System.out.println(pq);
    }
}
