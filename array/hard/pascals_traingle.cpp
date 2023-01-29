#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    vector<vector<int>> triangle;

    for(int i=1; i<=n; i++){
        vector<int> temp;
        for(int j=1; j<=i; j++){
            if(j==1 || j==i){
                temp.push_back(1);
            }
        }
        triangle.push_back(temp);
    }

    for(int i=0; i<=triangle.size(); i++){
        for(int j=0; j<=triangle[i].size(); j++){
            cout<<triangle[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}