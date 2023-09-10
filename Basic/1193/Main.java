import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {

    public static void main(String[] args) throws Exception{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int num = Integer.parseInt(br.readLine());
        int denom = 1;
        int i = 1;

        while (num > i) {
            num -= i;
            i += 1;
            denom = i + 1;
        }

        if (i % 2 == 0) {
            System.out.println(num + "/" + (denom - num));
        }
        else
            System.out.println(i - num + 1 + "/" + (num));
    }
}
