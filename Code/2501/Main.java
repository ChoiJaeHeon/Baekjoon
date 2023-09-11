import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int num = Integer.parseInt(st.nextToken());
        int order = Integer.parseInt(st.nextToken());
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

        if (order > cnt)
            System.out.println("0");
        else
            System.out.println(arr[order -1]);

    }
}
