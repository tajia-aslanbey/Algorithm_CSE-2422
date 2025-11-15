#include<iostream>
#include<string>
using namespace std;
#define d 256
#define q 101

 void rabinKarp(string text,string pattern){
    int n=text.length();
    int m=pattern.length();
    int i,j;
    int p=0,t=0,h=1;

    for(i=0;i<m-1;i++) h=(h*d)%q;
    for(i=0;i<m;i++){
        p=(d*p+pattern[i])%q;
        t=(d*t+text[i])%q;
    }

    for(i=0;i<=n-m;i++){
    if(p==t){
    for(j=0;j<m;j++){
  if(text[i+j]!=pattern[j]) break;
    }
  if(j==m) cout<<"Pattern found at index "<<i<<"\n";
    }
   if(i<n-m){
    t=(d*(t-text[i]*h)+text[i+m])%q;
    if(t<0) t+=q;
        }
        }
    }

int main(){
    string text,pattern;
    cout<<"Enter the text:";
    cin>>text;
    cout<<"Enter the pattern to search:";
    cin>>pattern;
    rabinKarp(text,pattern);
    return 0;
}
