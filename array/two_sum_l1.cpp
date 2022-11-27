#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>nums;
    vector<int> output;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    int sum=0;

    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            sum = nums[i] + nums[j];
            if(sum == target){
                output.push_back(i);
                output.push_back(j);
                break;
            }
        }
        if(output.empty()){
            continue;
        }else{
            break;
        }

    }

    for(int k=0; k<output.size(); k++){
        cout<<output[k]<<" ";
    }

    cout<<endl;

    return 0;
}