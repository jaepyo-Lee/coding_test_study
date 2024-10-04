#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string temp;
    for(int i=0;i<n;i++)
    {
        temp="";
       arr1[i]=arr1[i]|arr2[i];
        while(temp.size()!=n)
        {
            if(arr1[i]%2==0)
            {
                temp.push_back(' ');
            }
            else
            {
                temp.push_back('#');
            }
            arr1[i]/=2;
        }
        reverse(temp.begin(), temp.end());
        answer.push_back(temp);
    }
    
    return answer;
}
