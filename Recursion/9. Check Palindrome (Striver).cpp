#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool palindrome(string s, int i, int n){
   if(i > n/2) return true;
   if(s[i] != s[n-i-1]) return false;
   return palindrome(s, i+1, n);
}

int main(){
   string s = "madam";
   cout << palindrome(s, 0, 5) << endl;
}