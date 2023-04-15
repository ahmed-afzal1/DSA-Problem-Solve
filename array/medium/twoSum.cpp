#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> result;

    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            if(numbers[i] + numbers[j] == target){
                result.push_back(i+1);
                result.push_back(j+1);
            }
        }
    }

    return result;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    vector<int> nums;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;

    vector<int> result = twoSum(nums,target);

    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}