import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int up = Integer.parseInt(st.nextToken());
        int down = Integer.parseInt((st.nextToken()));
        int goal = Integer.parseInt((st.nextToken()));

        int cnt = (goal - down) / (up - down);
        if ((goal - down) % (up - down) != 0)
            cnt++;

        System.out.println(cnt);

    }
}
