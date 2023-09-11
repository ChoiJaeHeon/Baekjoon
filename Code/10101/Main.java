import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int a = Integer.parseInt(br.readLine());
        int b = Integer.parseInt(br.readLine());
        int c = Integer.parseInt(br.readLine());

        int sum = a + b + c;
        if (sum == 180) {
            if (a == b) {
                if (a == c)
                    System.out.println("Equilateral");
                else
                    System.out.println("Isosceles");
            }
            else {
                if (a == c)
                    System.out.println("Isosceles");
                else {
                    if (b == c)
                        System.out.println("Isosceles");
                    else
                        System.out.println("Scalene");
                }
            }

        }
        else
            System.out.println("Error");
    }
}
