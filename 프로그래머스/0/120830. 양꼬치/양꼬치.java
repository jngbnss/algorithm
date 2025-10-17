class Solution {
    public int solution(int n, int k) {
        int answer = n*12000+k*2000;
        int ret = n/10;
        answer-=ret*2000;
        return answer;
    }
}