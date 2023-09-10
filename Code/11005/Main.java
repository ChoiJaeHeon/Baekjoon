import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        int base = sc.nextInt();

        int size = size(num, base);
        char[] arr = new char[size];
        for (int i = size - 1; i >= 0; i--) {
            int mod = num % base;
            if (mod >= 0 && mod <= 9)
                arr[i] = (char)(mod);
            else
                arr[i] = (char)('A' + mod - 10);
            num /= base;
        }

        for (int i = 0; i < size; i++) {
            System.out.print(arr[i]);
        }
    }

    public static int size (int num, int base) {
        int cnt = 1;
        while (num / base != 0) {
            num /= base;
            cnt++;
        }
        return cnt;
    }
}
