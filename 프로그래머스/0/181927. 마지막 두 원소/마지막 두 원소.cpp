#include <string>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for(auto i:num_list){
        answer.push_back(i);
    }
    int a = num_list[num_list.size()-2];
    int b = num_list[num_list.size()-1];
    if(a<b) answer.push_back(b-a);
    else {
        cout<<b<<'\n';
        answer.push_back(b*2);
    }
    return answer;
}