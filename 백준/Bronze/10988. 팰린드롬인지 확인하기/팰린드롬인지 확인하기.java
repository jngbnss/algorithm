//package baekjoon.week1.d10988;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();

        String reversed = new StringBuilder(str).reverse().toString();

        if(str.equals(reversed)){
            System.out.println(1);
        }else{
            System.out.println(0);
        }

    }
}
