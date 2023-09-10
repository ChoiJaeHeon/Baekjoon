import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        int base = sc.nextInt();

        double res = 0;
        double num = 1;

        for(int i = s.length() - 1; i >= 0; i--) {
            if (s.charAt(i) <= '9' && '0' <= s.charAt(i))
                res += num * (s.charAt(i) - '0');
            else if ('A' <= s.charAt(i) && s.charAt(i) <= 'Z')
                res += num * (s.charAt(i) - 'A' + 10);
            num *= base;
        }
        System.out.print((long)res);
    }
}
