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

    // vector<vector<int>> result;
    // vector<int> resultTemp;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] == 0){
                // for(int k=0; k<n; k++){
                //     matrix[i][k] = 0;
                // }
                
            }
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<result[i][j]<<" ";
    //     }
    // }
    cout<<endl;
    


    return 0;
}