import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int[] arr = new int[6];

        for (int i = 0; i < 6; i += 2) {
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            if (i != 4)
                st = new StringTokenizer(br.readLine(), " ");

            arr[i] = x;
            arr[i+1] = y;
        }

        int temp;
        int cnt = 0;
        int res_x = 0;

        for (int i = 0; i < 2; i++) {
            cnt = 0;
            temp = arr[i];
            if (temp == arr[i + 2])
                cnt++;
            if (temp == arr[i + 4])
                cnt++;
            if (cnt == 1) {
                if (temp == arr[i + 2])
                    res_x = arr[i + 4];
                if (temp == arr[i + 4])
                    res_x = arr[i + 2];
            }
            if (cnt == 0) {
                res_x = arr[i];
            }
            if (cnt == 2)
                res_x = arr[i];
            if (i == 0)
                System.out.print(res_x + " ");
            else
                System.out.println(res_x);
        }
    }
}
