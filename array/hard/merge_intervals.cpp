#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int m,n;
    cin>>m>>n;

    vector<vector<int>> intervals;

    for(int i=0; i<m; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        intervals.push_back(temp);
    }

    sort(intervals.begin(),intervals.end());
    int size = intervals.size();

    vector<vector<int>> ans;
    for(int i=0; i<size; i++){
        if(ans.empty()){
            ans.push_back(intervals[i]);
        }else{
            vector<int> &v = ans.back();
            int y = v[1];

            if(intervals[i][0]<=y){
                v[1] = max(y,intervals[i][1]);
            }else{
                ans.push_back(intervals[i]);
            }
        }
    }
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    


    return 0;
}