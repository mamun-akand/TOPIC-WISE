// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll    long long int
#define   ld    long double	
#define   vll   vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    '\n'
#define   debug(x)   cout << #x << " : " << x << endl;
#define   SpicyWings return 0;
 
#define   ln      cout<<'\n';
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
 
#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;
//=====================================================================
ll target;
bool ans = false;

void subSeq(ll n){
   if(n == target){
      ans = true; 
   }
   if(n > target){
      return; 
   }
   subSeq(n*10);
   subSeq(n*20);
}

int main(){
   FAST;
   
   Test{
      ans = false;
      cin>>target;
      subSeq(1);
      if(ans) py;
      else pn;
   }
    
   SpicyWings;
}