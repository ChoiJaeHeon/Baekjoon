import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int max = 0;
        int row = 0;
        int col = 0;
        int[][] mat = new int[9][9];

        for(int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                mat[i][j] = sc.nextInt();
                if (mat[i][j] >= max) {
                    max = mat[i][j];
                    row = i + 1;
                    col = j + 1;
                }
            }
        }

        System.out.println(max);
        System.out.print(row + " " + col);
    }
}
