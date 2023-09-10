import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int level;
        int quot;

        int rep = sc.nextInt();


        for (int i = 0; i < rep; i++) {

            int height = sc.nextInt();
            int width = sc.nextInt();
            int customer = sc.nextInt();

            if (customer % height != 0) {
                level = customer % height;
                quot = (customer / height) + 1;
            }
            else {
                level = height;
                quot = (customer / height);
            }

            System.out.print(level);
            System.out.printf("%02d\n", quot);
        }
    }
}
