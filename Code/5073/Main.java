import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        while (true) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int[] arr ={Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken())};

            int sum = 0;
            for (int i = 0; i < 3; i++) {
                sum += arr[i];
            }
            if (sum == 0)
                break;
            else {
                Arrays.sort(arr);
                if (arr[2] >= arr[0] + arr[1])
                    System.out.println("Invalid");
                else {
                    if (arr[2] == arr[1]) {
                        if (arr[0] == arr[2])
                            System.out.println("Equilateral");
                        else
                            System.out.println("Isosceles");
                    }
                    else {
                        if (arr[1] == arr[0])
                            System.out.println("Isosceles");
                        else
                            System.out.println("Scalene");
                    }
                }
            }
        }
    }
}
