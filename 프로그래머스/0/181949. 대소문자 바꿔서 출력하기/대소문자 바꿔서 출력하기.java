
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next(); // 문자열 입력
        StringBuilder sb = new StringBuilder();

        // 문자열의 각 문자를 검사
        for (char c : a.toCharArray()) {
            if (Character.isLowerCase(c)) { // 소문자면 대문자로
                sb.append(Character.toUpperCase(c));
            } else if (Character.isUpperCase(c)) { // 대문자면 소문자로
                sb.append(Character.toLowerCase(c));
            } else { // 알파벳이 아니면 그대로
                sb.append(c);
            }
        }

        System.out.println(sb.toString());
    }
}
