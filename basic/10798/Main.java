import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        char[][] mat = new char[5][15];
        int max = 0;

        for(int i = 0; i < 5; i++) {
            String s = sc.next();
            for (int j = 0; j < s.length(); j++) {
                mat[i][j] = s.charAt(j);
                if (max <= s.length())
                    max = s.length();
            }
        }

        for(int i = 0; i < max; i++) {
            for (int j = 0; j < 5; j++)
                if(mat[j][i] != '\0')
                    System.out.print(mat[j][i]);
        }
    }
}
