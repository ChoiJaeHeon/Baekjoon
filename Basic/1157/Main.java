import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();

        int[] arr = new int[26];

        for (int i = 0; i < 26; i++) {
            arr[i] = 0;
        }

        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if ('A' <= c && c <= 'Z')
                arr[c - 'A']++;
            else if ('a' <= c && c <= 'z')
                arr[c - 'a']++;
        }

        int temp = -1;
        char order = '?';
        for (int i = 0; i < 26; i++) {
            if (arr[i] > temp) {
                temp = arr[i];
                order = (char) (65 + i);
            }
            else if (arr[i] == temp)
                order = '?';
        }

        System.out.print(order);

        sc.close();
    }
}
