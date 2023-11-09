#include<bits/stdc++.h>

using namespace std;
 
void print(vector<vector<int> >&sodu){
for(int i=0;i<9;i++){
for(int j=0;j<9;j++){
 
   cout<<sodu[i][j]<<" ";
}
cout<<endl;
}

return ; }
void solve(vector<vector<int> >&sodu,vector<string>&row,vector<string>&col,vector<string>&rxc,int i,int j ){
 
  if(i==9){ co++;
       cout<<" "<<endl;
    print(sodu);
    
    return ; }
    
   if(j==9){
    solve(sodu,row,col,rxc,i+1,0 );
   return ; }
   if(sodu[i][j]!=0) {
       solve(sodu,row,col,rxc,i,j+1 );
    return ; } 
  for(int q=1;q<=9;q++){
int k=((i/3)*3+(j/3));
string s;
s='0'+q;
    int fr = row[i].find(s);
    int fc = col[j].find(s);
    int fx = rxc[k].find(s); 
if ( fr==-1 and fc==-1 and fx==-1) { 
     row[i]+=s;
     col[j]+=s;
     rxc[k]+=s; 
     sodu[i][j]=q;
 
     solve(sodu,row,col,rxc,i,j+1); 
    row[i].erase(row[i].size() - 1);
    col[j].erase(col[j].size() - 1);
    rxc[k].erase(rxc[k].size() - 1);
     sodu[i][j]=0;
       
  } } }
int main(){
   #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
   #endif  

vector<vector<int > >sodu(9);
vector<string>row(9);
vector<string>col(9);
vector<string>rxc(9);
string s;
for(int i=0;i<9;i++){
for(int j=0;j<9;j++){
  int value;  cin>>value;
  sodu[i].push_back(value);
 s='0'+value;
int k=((i/3)*3+(j/3));
  row[i]+=s;
  col[j]+=s;
  rxc[k]+=s;
} }
 solve(sodu,row,col,rxc,0,0 ); 
    return 0;
}
