/* my code are my writings */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef  pair<int,int>P;
typedef pair<int,pair<int,int> >P1;
typedef pair<pair<int,int>,pair<int,int> >P11;


#define rep(xx,uu,ee) for(xx=uu;xx<ee;++xx)
#define mm(xx) memset(xx,0,sizeof(xx))
#define F first
#define S second
#define SF second.first
#define SS second.second
#define FF first.first
#define FS first.second
#define pb push_back

#define SYNC ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define scd(xx) scanf("%d",&xx)
#define scd2(xx,uu) scanf("%d%d",&xx,&uu)
#define rep(xx,uu,ee) for(xx=uu;xx<ee;++xx)

//inline void fastRead(int *a){register char c=0;while(c<33)c=gc();*a=0;while(c>33){*a=*a*10+c-'0';c=gc();}}

//inline void fastWrite(int a){char snum[20];int i=0;do{snum[i++]=a%10+48;a=a/10;}while(a!=0);i=i-1;while(i>=0)pc(snum[i--]);pc('\n');}




//i64 bigmod(i64 num,i64 n){if(n==0)return 1;i64 x=bigmod(num,n/2);x=x*x%mod;if(n%2==1)x=x*num%mod;return x;}

//i64 modinverse(i64 num){return bigmod(num,mod-2)%mod;}

//void combination(int pos,int last){if(pos==k+1){for(int i=1;i<=k;i++)cout << tem[i];cout << endl;return;}
//for(int i=last+1;i<=n-k+pos;i++){tem[pos] = num[i-1];combination(pos+1,i);}}

//i64 po(i64 a,i64 b){i64 ans=1;while(b--)ans *= a;return ans;}

//i64 ncr(i64 n,i64 r){if(n==r)return 1;if(r==1)return n;if(dp[n][r]!=-1)return dp[n][r];return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);}

//int popcount(i64 num){bitset<70> tem(num);return tem.count();}

//matrix rot(matrix a){matrix res;res.row = a.col;res.col = a.row;For(i,a.row)For(j,a.col)res.mat[j][a.row-i-1] = a.mat[i][j];return res;}

//  int dx[]={1,0,-1,0};int dy[]={0,1,0,-1};                           //4 directions
//  int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};      //8 directions
//  int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1};       //knight's move
//  int dx[]={-1,-1,0,1,1,1,0}; int dy[]={-1,1,2,1,-1,-2};                //hexagonally move
// pos=lower_bound(v.begin(), v.end(), data) - v.begin();                  // binary search position(index =0)

#define SIZ 4000001
#define SIZ1 1000000
#define INF 9999999

#define T int t;for(scanf("%d",&t);t--;)
#define mod 1000000007
#define scl(xx) scanf("%lld",&xx)
#define bs(XX,xx) binary_search(XX.begin(), XX.end(),xx)

//for input:   fastread(&x)  output:   fastwrite(x)


//for strictly increasing lis: complexity (nlgn)
int main()
{
int n,i;
cin>>n;
int A[n+5],lis[n+5],dp[n+5];
fill_n(lis,n+5,1);
fill_n(dp,n+5,INF);
rep(i,0,n) scd(A[i]);
rep(i,0,n)
{
	*lower_bound(dp,dp+n,A[i])=A[i];
//	cout<<lower_bound(dp,dp+n,A[i])-dp<<endl;
		lis[i]+=lower_bound(dp,dp+n,A[i])-dp;
}

//for lis length
rep(i,0,n)
{
	if(dp[i]==INF)
	{
		cout<<i<<endl;
		break;
	}
}

//for lis array
rep(i,0,n) cout<<lis[i]<<" ";






    return 0;
}










/*
this waiting is stoking!
*/
