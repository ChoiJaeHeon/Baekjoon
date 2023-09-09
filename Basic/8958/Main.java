import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int rep = sc.nextInt();
        int sum = 0;

        for (int i = 0; i < rep; i++) {

            String s = sc.next();
            int cnt = 0;

            for (int j = 0; j < s.length(); j++) {
                if (s.charAt(j) == 'O') {
                    cnt++;
                    sum += cnt;
                }
                else
                    cnt = 0;
            }
            System.out.println(sum);
            sum = 0;
        }
    }
}
