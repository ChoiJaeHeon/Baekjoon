import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {

    public static void main(String[] args) throws Exception{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int num = Integer.parseInt(br.readLine());
        int sum = 1;
        int res = 1;

        for (int i = 1; num / sum != 0; i++) {
            if (num == sum)
                break;
            else
                res = i + 1;
            sum += i * 6;
        }
        System.out.println(res);
    }
}
