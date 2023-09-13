import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int rep = Integer.parseInt(st.nextToken());

        int[] arr = new int[2 * rep];

        st = new StringTokenizer(br.readLine(), " ");

        for (int i = 0; i < 2 * rep; i += 2) {
            arr[i] = Integer.parseInt(st.nextToken());
            arr[i + 1] = Integer.parseInt(st.nextToken());
            if (i != 2 * rep - 2)
                st = new StringTokenizer(br.readLine(), " ");
        }

        int min_x = 10001;
        for (int i = 0; i < 2 * rep; i += 2) {
            if (arr[i] < min_x)
                min_x = arr[i];
        }
        int max_x = -10001;
        for (int i = 0; i < 2 * rep; i += 2) {
            if (arr[i] > max_x)
                max_x = arr[i];
        }
        int min_y = 10001;
        for (int i = 1; i < 2 * rep; i += 2) {
            if (arr[i] < min_y)
                min_y = arr[i];
        }
        int max_y = -10001;
        for (int i = 1; i < 2 * rep; i += 2) {
            if (arr[i] > max_y)
                max_y = arr[i];
        }

        long res = (long)(max_x- min_x) * (long)(max_y - min_y);
        System.out.println(res);
    }
}