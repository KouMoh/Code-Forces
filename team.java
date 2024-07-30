import java.util.*;

class team {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int Petya = sc.nextInt();
            int Vasya = sc.nextInt();
            int Tonya = sc.nextInt();

            int count = 0;

            if (Petya == 1)
                count++;
            if (Vasya == 1)
                count++;
            if (Tonya == 1)
                count++;

            if (count >= 2)
                ans++;
        }
        System.out.println(ans);
        sc.close();
    }

}