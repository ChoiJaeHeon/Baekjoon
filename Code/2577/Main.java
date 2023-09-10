import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int[] arr = new int[10];
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int cal = a * b * c;

        int n_size = n_size(cal);
        int temp = n_size(cal);
        int[] arr2 = new int[n_size];
        for (int i = 0; i < temp; i++) {
            arr2[i] = cal / power(10, n_size - 1);
            cal = cal % power(10, n_size - 1);
            n_size--;
        }
        for(int i = 0; i < temp; i++) {
            for (int j = 0; j < 10; j++)
                if(j == arr2[i])
                    arr[j]++;

        }
        for(int i = 0; i < 10; i++)
            System.out.println(arr[i]);
    }

    public static int power(int num, int pow) {
        int ret = 1;
        while (pow != 0) {
            ret *= num;
            pow--;
        }
        return ret;
    }

    public static int n_size(int num) {
        int cnt = 1;
        while(num / 10 != 0) {
            cnt++;
            num = num / 10;
        }
        return cnt;
    }
}
