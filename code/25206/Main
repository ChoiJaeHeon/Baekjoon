import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        double sum = 0;
        double num;
        double grade = 0;
        char[] ch = new char[2];
        double total = 0;

        for (int i = 0; i < 20; i++) {

            String s = sc.next();
            num = sc.nextDouble();
            String score = sc.next();
            ch[0] = score.charAt(0);
            if(score.length() == 2)
                ch[1] = score.charAt(1);
            else
                ch[1] = '-';
            if(ch[0] == 'A') {
                if (ch[1] == '+')
                    grade = 4.5;
                else if (ch[1] == '0')
                    grade = 4.0;
            }
            else if (ch[0] == 'B') {
                if (ch[1] == '+')
                    grade = 3.5;
                else if (ch[1] == '0')
                    grade = 3.0;
            }
            else if (ch[0] == 'C') {
                if (ch[1] == '+')
                    grade = 2.5;
                else if (ch[1] == '0')
                    grade = 2.0;
            }
            else if (ch[0] == 'D') {
                if (ch[1] == '+')
                    grade = 1.5;
                else if (ch[1] == '0')
                    grade = 1.0;
            }
            else if (ch[0] == 'F')
                grade = 0;
            else if (ch[0] == 'P')
                continue;

            double weighted = grade * num;
            total += weighted;
            sum += num;
        }
        System.out.println(total / sum);
    }
}
