#include <bits/stdc++.h>
using namespace std;

void printGraph(vector<int> *p, int n){
    for(int i=0;i<n;i++){
            cout<<i<<"->";
        for(int j =0; j<p[i].size(); j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int node, edge;
    cin>>node>>edge;
    vector<int> *m= new vector<int>[node];

    int u,v;
    for(int i=0; i<edge; i++){
            cin>>u>>v;
            m[u].push_back(v);
            //m[v].push_back(u);
    }

    printGraph(m,node);

    cin.get();
}

/*
7 10
1 2
1 3
1 4

2 4

4 5
4 6

5 6

6 7
6 3

3 7

*/

