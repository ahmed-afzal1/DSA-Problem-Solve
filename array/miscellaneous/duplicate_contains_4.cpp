#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums){
    int value = 0;
    int flag = 0;
    for(auto num : nums){
        if(num == value){
            flag = 1;
            break;
        }
        value = num;
    }

    if(flag==1){
        return true;
    }
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    vector<int>nums;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    // for(int i=0; i<nums.size(); i++){
    //     cout<<nums[i]<<" ";
    // }
    // cout<<endl;

    vector<int>::iterator it;
    it = nums.begin();
    int value = *it;
    int flag = 0;

    sort(nums.begin(),nums.end());

    for(auto num : nums){
        if(num == value){
            flag = 1;
            break;
        }
        value = num;
    }

    // int value = 0;
    // int flag = 0;
    // int range = nums.size()-1;

    // for(int i=0; i<=range; i++){
    //     int innerRange = range-i;

    //     for(int j=i+1; j<=innerRange; ++j){
    //         if(nums[i] == nums[j]){
    //             flag = 1;
    //             break;
    //         }else{
    //             continue;
    //         }
    //     }
    // }

    // if(flag==1){
    //     cout<<" true";
    // }else{
    //     cout<<"false";
    // }


    return 0;
}