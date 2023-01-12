#include<bits/stdc++.h>
using namespace std;
#define ROW 3
#define COL 4

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    vector<vector<int>> matrix;

    for (int i = 0; i < ROW; i++) {
        vector<int> v1;
  
        for (int j = 0; j < COL; j++) {
            int x;
            cin>>x;
            v1.push_back(x);
        }
        matrix.push_back(v1);
    }

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}