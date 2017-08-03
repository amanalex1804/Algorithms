#include<bits/stdc++.h>
using namespace std;
#define mm(XX) memset(XX,0,sizeof(XX))
void LCS(string A,string B,int m,int n,int *x,int *y)
{
    int i,j;       // y is current row
                               // x is previous row

    for(i=1;i<=m;++i)
    {
        for(j=1;j<=n;++j)
        {

            if(A[i-1]==B[j-1])
                y[j]=x[j-1]+1;
            else if(y[j-1]>x[j])
                y[j]=y[j-1];
            else y[j]=x[j];
        }
        int *t;
        t=x;
        x=y;
        y=t;
    }
    cout<<x[n];
}
int main(){
    string A,B;
    cin>>A>>B;
    int x[50003],y[50003];
    LCS(A,B,A.size(),B.size(),x,y);
return 0;}
