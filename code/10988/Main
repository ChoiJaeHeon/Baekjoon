import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();

        int length = s.length();
        int ret = 1;
        for (int i = 0; i < s.length() / 2; i++) {
            if(s.charAt(i) != s.charAt(length - i - 1)) {
                ret = 0;
            }
        }

        System.out.print(ret);
        sc.close();
    }
}
