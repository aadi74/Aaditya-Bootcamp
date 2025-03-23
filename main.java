import java.util.Scanner;

public class Main {
    public static void fibonacci(int n) {
        int a = 0, b = 1, temp;
        System.out.print(a + " " + b + " ");
        for(int i = 2; i < n; i++) {
            temp = a + b;
            System.out.print(temp + " ");
            a = b;
            b = temp;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of terms: ");
        int n = sc.nextInt();
        fibonacci(n);
        sc.close();
    }
}
