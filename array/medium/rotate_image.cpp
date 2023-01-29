#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix;

    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }

        for(int i=0;i<matrix.size();i++){
           int j = matrix.size()-1;
           while(j >= 0){
               matrix[j].insert(matrix[j].begin(),matrix[i].back());
               matrix[i].pop_back();
               j--;
           }
        }

    return 0;
}