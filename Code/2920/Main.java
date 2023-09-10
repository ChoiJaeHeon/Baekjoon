import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int[] arr = new int[8];

        for (int i = 0; i < 8; i++) {
            arr[i] = sc.nextInt();
        }

        int chk = 0;
        for (int i = 0; i < 7; i++) {
            if (arr[i] < arr[i + 1])
                if (chk == - 1)
                    chk = 2;
                else if (chk == 0)
                    chk = 1;
            if (arr[i] > arr[i + 1])
                if (chk == 1)
                    chk = 2;
                else if (chk == 0)
                    chk = -1;
        }

        if (chk == 1)
            System.out.println("ascending");
        else if (chk == 2)
            System.out.println("mixed");
        else if (chk == -1)
            System.out.println("descending");
    }
}
