#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int m,n;
    cin>>m>>n;

    vector<vector<int>> matrix;
    for(int i=0; i<m; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }

    int rows = matrix.size(), cols = matrix[0].size();
    vector<pair<int,int>> mp;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==0) mp.push_back(make_pair(i,j));
        }
    }

    for(auto it:mp){
        int j=0;
        while (j<cols)
        {
            matrix[it.first][j]=0;
            j++;
        }

        j=0;
        while (j<rows)
        {
            matrix[j][it.second]=0;
            j++;
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    


    return 0;
}