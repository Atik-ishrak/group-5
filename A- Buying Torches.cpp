#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;

 cin>>t;

 while(t--){
  long long  a,b,c,total,ans;

  cin>>a>>b>>c;

  total=b*c;

  if(total%(a-1)!=0)
{

  ans1=(total/(a-1))+1;
}N


else{
  ans=total/(a-1);
}
//cout<<ans<<endl;

if((ans*(a-1)%b)>=c){
  cout<<ans+c<<endl;
}
else{
  if(c>a){
    cout<<c+ans+((c-a)/(a-1))+1<<endl;
  }
  else{
    cout<<c+ans+1<<endl;
  }



}





 }






return 0;}
