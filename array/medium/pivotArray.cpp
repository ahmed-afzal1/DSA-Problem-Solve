#include<bits/stdc++.h>
using namespace std;

vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>before;
        vector<int>after;

        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < pivot){
                before.push_back(nums[i]);
            }else if(nums[i] == pivot){
                count++;
            }else{
                after.push_back(nums[i]);
            }
        }

        for(int i=0; i<count; i++){
            before.push_back(pivot);
        }

        for(int i=0; i<after.size(); i++){
            before.push_back(after[i]);
        }


        return before;
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
    int pivot;
    cin>>pivot;

    cout<<pivotArray(nums);

    return 0;
}