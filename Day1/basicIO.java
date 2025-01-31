import java.util.Scanner;

public class basicIO {
    public static void main(String[] args) {
        // Your code here
        Scanner sc = new Scanner(System.in);
        System.out.println("Whats your Name ?");
        String name= sc.next();
        sc.nextLine();
        System.out.println("Hello " + name+ " whats your Full Name ?");
        String fname = sc.nextLine();
        System.out.println("Welcome " + fname + " whats your age ?");
        int age = sc.nextInt();
        System.out.println("What's your 10th percentage ?");
        float pmarks = sc.nextFloat();
        System.out.println("Name = " + name);
        System.out.println("Full name = " + fname);
        System.out.println("Age = " + age);
        System.out.println("10th Percentage = " + pmarks);
    }
}