#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll    long long int
#define   ld 	long double	
#define   vll	vector <ll>	
#define   vld	vector <ld>
#define   mp	map <ll,ll>
#define   st	set <ll>

//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   pi      3.1415926535897932384626433832795
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    "\n"
#define   ln      cout<<"\n";
#define   pb      push_back
#define   eb      emplace_back
#define   rn      return 0;

#define   pa      cout<<ans<<endl
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; f1(t,1,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<e; i++)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   
   // O(N) because after erasing all elements need to shift left
   // O(N) because after erasing all elements need to shift left
   // O(N) because after erasing all elements need to shift left
   
   vll v = {1, 2, 2, 2, 3, 2, 3, 3, 3, 4};
   
   for(ll i=1; i<v.size(); i++){
      if(v[i] == v[i-1])
         v.erase(v.begin()+i);
   }
   
   // for(auto it = v.begin()+1; it != v.end(); it++){
      // if(*it == *(it-1)) v.erase(it);
   // }
   
   vp(v);
   
}

















