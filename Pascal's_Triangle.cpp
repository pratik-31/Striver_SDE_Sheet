#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> a(n);
    a[0].push_back(1);
    for(int i=1;i<n;i++){
        a[i].push_back(1);
        for(int j=0;j<a[i-1].size()-1;j++){
            a[i].push_back(a[i-1][j]+a[i-1][j+1]);
        }
        a[i].push_back(1);
    }
    return a;
}
