import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        boolean[][] mat = new boolean[100][100];
        int cnt = 0;
        int num = sc.nextInt();

        for(int i = 0; i < num; i++) {
            int width = sc.nextInt();
            int height = sc.nextInt();
            for (int j = height; j < height + 10; j++) {
                for (int k = width; k < width + 10; k++)
                    mat[j][k] = true;
            }
        }

        for(int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++)
                if(mat[i][j])
                    cnt++;
        }
        System.out.print(cnt);
    }
}
