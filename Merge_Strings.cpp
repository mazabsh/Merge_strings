#include<iostream> 
#include<string> 
#include<algorithm>


using namespace std; 

string mergeAlternately(string word1, string word2) {
  string ans; 

  int m = word1.size(); 
  int n= word2.size(); 

  for(int i=0; i<max(m,n); ++i){
    if(i<m) ans += word1[i]; 
    if(i<n) ans +=word2[i]; 
  }

  return ans; 
}

int main(){

  string word1 = "abc"; 
  string word2 = "pqr"; 

  string ans = mergeAlternately(word1, word2); 

  cout << "merge alternately " << word1 << " and " << word2 << "gives " << ans << endl; 

  return 0; 
  
}
