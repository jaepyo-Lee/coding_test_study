#include <iostream>
#include <string> 
#include <cstring>
#include <sstream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    multiset<int> ms;
    
    for(int i = 0; i < operations.size(); i++){ // O(N)
        char cmd = operations[i][0];
        int num = stoi(operations[i].substr(2));
        
        if(cmd == 'I'){
            // O(logN)
            ms.insert(num);
        }else{
            if(ms.empty()) continue;

            // O(logN)
            if(num == 1){ // 최댓값 삭제 
                ms.erase(prev(ms.end()));
            }else{ // 최솟값 삭제
                ms.erase(ms.begin());
            }
        }
    }
    
    if(ms.empty()){
        return {0, 0};
    }else{
        answer.push_back(*prev(ms.end()));
        answer.push_back(*ms.begin());
    }
    
    return answer;
}