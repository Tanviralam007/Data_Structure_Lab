#include <bits/stdc++.h>
using namespace std;


void printGraph(int **p, int n){

    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){

    int v, edge;
    cin>>v>>edge;

    int **m = new int*[v];
    for(int i=0;i<v;i++){
        m[i] = new int[v];
    }

    for(int i=0;i<v;i++){
        for(int j =0;j<v;j++){
           m[i][j]=0;
        }
    }

    int u1,v1;
    for(int i=0;i<edge;i++){
            cin>>u1>>v1;
            //m[u1][v1]=m[v1][u1]=1;
            m[u1][v1]=1;
    }
    printGraph(m,v);

return 0;
}

