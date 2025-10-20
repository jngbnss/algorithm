#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 1;
    int ss =0;
    int times= 1;
    for(auto i:num_list){
        times*=i;
        ss+=i;
    }
    ss*=ss;
    if(times<ss) answer = 1;
    else answer =0;
    return answer;
}