#include<bits/stdc++.h>
#define infi 20000000
using namespace std;
int a[200030],mat[202][202],sol[202];

void clear(){
    for(int i=0;i<202;i++) {
        for(int j=0;j<202;j++)
            mat[i][j]=infi;
    }

}

void print(int m) {

    for(int i=1;i<=m;i++) {
        for(int j=1;j<=m;j++)
           cout<<mat[i][j]<<" ";
           cout<<endl;
    }

}
void p1(int m){
    for(int i = 0;i<m+1;i++)
    {
        for(int j = 0;j<m+1;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

        for(int i=1;i<=m;i++)
          cout<<sol[i]<<" ";
          cout<<endl;
}

void apsp(int V) {
    //apsp code from geeksforgeeks
    int i,j,k;
      for (k = 1; k <= V; k++) {
        for (i = 1; i <= V; i++) {
            for (j = 1; j <= V; j++) {
                if (mat[i][k]==1 && mat[k][j]==1&&mat[i][j]==infi) {
                    mat[i][j]=1;
                    mat[j][i]=1;
                }

            }
        }
    }
     for(int i=1;i<=V;i++)
        mat[i][i]=0;
}

int main() {

    freopen("in.txt","r",stdin);

int t,m,k,n,x,y,curr,ans,next,res;
scanf("%d",&t);
while(t-- ){
    clear();
    scanf("%d%d%d",&m,&k,&n);
    for(int i=0;i<k;i++) {
        scanf("%d%d",&x,&y);
        mat[x][y]=1;
        mat[y][x]=1;
    }

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    apsp(m);
  //  print(m);
    curr=a[n-1];
    sol[m+1]=infi;
    for(int i=m;i>0;i--) {
         sol[i]=min(sol[i+1],mat[curr][i]);

    }
    p1(m);
    for(int i=n-2;i>=0;i--) {
        curr=a[i];
        for(int j=m;j>0;j--) {
            if(mat[curr][j]==infi)
                sol[j]=min(infi,sol[j+1]);
            else {
                sol[j]=min(sol[j]+mat[curr][j],sol[j+1]);
            }
        }
        p1(m);
    }
    ans=infi;
    for(int i=1;i<=m;i++){
        ans=min(ans,sol[i]);
    }
    if(ans==infi)
        puts("-1");
    else
        printf("%d\n",ans);
}

return 0;
}
