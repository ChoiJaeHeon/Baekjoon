import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();
        char[] letter = new char[2];
        char[] letter3 = new char[3];
        int cnt = 0;

        for(int i = 0; i + 1 < s.length(); i++) {
            letter[0] = s.charAt(i);
            letter[1] = s.charAt(i+1);

            if (letter[0] == 'c' && letter[1] == '=')
                cnt++;
            else if (letter[0] == 'c' && letter[1] == '-')
                cnt++;
            else if (letter[0] == 'l' && letter[1] == 'j')
                cnt++;
            else if (letter[0] == 'n' && letter[1] == 'j')
                cnt++;
            else if (letter[0] == 's' && letter[1] == '=')
                cnt++;
            else if (letter[0] == 'z' && letter[1] == '=')
                cnt++;
            else if (letter[0] == 'd' && letter[1] == '-')
                cnt++;
        }

        for(int i = 0; i + 2 < s.length(); i++) {
            letter3[0] = s.charAt(i);
            letter3[1] = s.charAt(i + 1);
            letter3[2] = s.charAt(i + 2);

            if (letter3[0] == 'd' && letter3[1] == 'z' && letter3[2] == '=')
                cnt++;
        }

        System.out.print(s.length() - cnt);
        sc.close();
    }
}
