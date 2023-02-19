#include<bits/stdc++.h>
using namespace std;

vector<int> separateDigits(vector<int>& nums) {
    vector<int> result,temp;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>9){
            while(nums[i]>0){
                int seperateDigit = nums[i] % 10;
                nums[i] = nums[i] / 10;

                temp.push_back(seperateDigit);
            }

            reverse(temp.begin(),temp.end());
            for(auto it:temp){
                result.push_back(it);
            }
            temp.clear();
        }else{
            result.push_back(nums[i]);
        }
    }

    return result;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int m;
    cin>>m;

    vector<int> nums;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    vector<int> result;
    result = separateDigits(nums);

    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}