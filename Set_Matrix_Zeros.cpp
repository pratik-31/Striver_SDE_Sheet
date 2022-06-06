#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	int n=matrix.size();
    int m=matrix[0].size();
    vector<int> a(n,0),b(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                a[i]=1;
                b[j]=1;
            }
         }
     }
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             if(a[i]==1 || b[j]==1)
                 matrix[i][j]=0;
         }
      }
}
