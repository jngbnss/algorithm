import java.util.*;

class Solution {
    public int[] solution(int[] numbers, int num1, int num2) {
        int[] answer = {};
        ArrayList<Integer> al = new ArrayList<Integer>();

        for(int i = num1; i <= num2; i++)
            al.add(numbers[i]);

        answer = new int[al.size()];
        for(int i = 0; i < answer.length; i++)
            answer[i] = al.get(i);

        return answer;
    }
}