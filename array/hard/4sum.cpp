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
    
    int target = 0;
    cin>>target;

    sort(nums.begin(), nums.end());
    set<vector<int>> s;
    vector<vector<int>> output;
    for (int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            int k = j + 1;
            int l = nums.size() - 1;
            while (k < l) {
                //by writing below 4 statement this way it will not give runtime error
                long long int sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if (sum == target) {
                    s.insert({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                } else if (sum < target) {
                    k++;
                } else {
                    l--;
                }
            }
        }
    }
    for(auto quadruplets : s)
        output.push_back(quadruplets);


        for(int i=0; i<output.size(); i++){
            for(int j=0; j<output[i].size(); j++){
                cout<<output[i][j]<<" ";
            }
            cout<<endl;
        }


    return 0;
}