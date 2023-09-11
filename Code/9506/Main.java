import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));


        while (true) {
            int num = Integer.parseInt(br.readLine());

            if (num == -1)
                break;

            int cnt = 0;

            for (int i = 1; i <= num; i++) {
                if (num % i == 0)
                    cnt++;
            }

            int[] arr = new int[cnt];

            int j = 0;

            for (int i = 1; i <= num; i++) {
                if (num % i == 0) {
                    arr[j] = i;
                    j++;
                }
            }

            int sum = 0;

            for (int i = 0; i < cnt - 1; i++) {
                sum += arr[i];
            }

            if (sum == num) {
                System.out.print(num + " = ");
                for (int i = 0; i < cnt - 2; i++) {
                    System.out.print(arr[i] + " + ");
                    if (i == cnt - 3)
                        System.out.println(arr[cnt - 2]);
                }
            }
            else
                System.out.println(num + " is NOT perfect.");
        }
    }
}
