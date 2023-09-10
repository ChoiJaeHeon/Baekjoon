import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st= new StringTokenizer(br.readLine(), " ");

        int x = Integer.parseInt(st.nextToken());
        int y = Integer.parseInt(st.nextToken());
        int w = Integer.parseInt(st.nextToken());
        int h = Integer.parseInt(st.nextToken());

        int a = w - x;
        int b = h - y;

        int[] arr = new int[4];
        arr[0] = a;
        arr[1] = b;
        arr[2] = x;
        arr[3] = y;

        int min = 1001;
        for (int i = 0; i < 4; i++) {
            if (arr[i] < min)
                min = arr[i];
        }
        System.out.println(min);
    }
}
