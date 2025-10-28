class Solution {
    public int[] solution(String[] strlist) {
        int[] answer = new int[strlist.length];
        int idx =0;
        for(var i:strlist){
            answer[idx++] =i.length();
        }
        return answer;
    }
}