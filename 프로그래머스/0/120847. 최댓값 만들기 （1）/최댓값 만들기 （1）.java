import java.util.Arrays;
class Solution {
    public int solution(int[] numbers) {
        int answer = 0;
        //Collection.sort(numbers);
        Arrays.sort(numbers); // 배열 오름차순 정렬
        answer = numbers[numbers.length-1]*numbers[numbers.length-2];
        return answer;
    }
}