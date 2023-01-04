#include<bits/stdc++.h>
using namespace std;

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

    // int counter = 1;
    // while(counter<n){
    //     for(int i=0; i<n-counter; i++){
    //         if(nums[i] == 0){
    //             int temp = nums[i];
    //             nums[i] = nums[i+1];
    //             nums[i+1] = temp;
    //         }
    //     }
    //     counter++;
    // }

    int temp[nums.size()];
    int k=0;
    for (int i=0;i<nums.size();i++){
        if (nums[i]!=0){
            temp[k]=nums[i];
            k++;
        }
    }
    
    while (k<nums.size()){
        temp[k]=0;
        k++;
    }

    for(int i=0; i<nums.size(); i++){
        nums[i] = temp[i];
    }

    for(auto it:nums){
        cout<<it<<" ";
    }



    return 0;
}