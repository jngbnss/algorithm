class Solution {
    public int solution(int[] sides) {
        int answer = 2;
        int mx = 0;
        int sum = 0;
        for(int i=0;i<3;i++){
            mx = Math.max(mx,sides[i]);
            sum+=sides[i];
        }
        if(sum-mx>mx) answer =1;
        
        return answer;
    }
}