class Solution {
    public String solution(String my_string) {
        String answer = "";
        StringBuilder sb =new StringBuilder(my_string);
        sb.reverse();
        answer = sb.toString();
        return answer;
    }
}