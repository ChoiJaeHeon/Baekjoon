import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int cnt = 0;
        int sum = 0;
        int min = Integer.parseInt(br.readLine());
        int max = Integer.parseInt(br.readLine());

        for (int i = min; i <= max; i++) {
            if (find_Prime(i))
                cnt++;
        }
        int[] arr = new int[max];
        int j = 0;
        for (int i = min; i <= max; i++) {
            if (find_Prime(i)) {
                arr[j] = i;
                j++;
            }
        }
        for (int i = 0; i < cnt; i++)
            sum += arr[i];
        if (sum == 0)
            System.out.println("-1");
        else {
            System.out.println(sum);
            System.out.println(arr[0]);
        }
    }

    public static boolean find_Prime (int num) {
        if (num == 1)
            return false;
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
}
