public class Main{
    public static void main(String[] args){
        String a = "abc";
        String b = "abc";
        System.out.println(a == b);
        char[] A = {'a', 'b', 'c'};
        char[] B = {'a', 'b', 'c'};
        System.out.println(A == B); 
        Object aa = new Object();
        Object bb = new Object();
        System.out.println(aa == bb);
    }   
}