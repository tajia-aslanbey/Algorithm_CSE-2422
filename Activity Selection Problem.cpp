#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
    cout<<"Enter number of activities:";
    cin>>n;
   vector<int>start(n),finish(n);
  cout<<"Enter start times:\n";
    for(int i=0;i<n;i++)
        cin>>start[i];
cout<<"Enter finish times:\n";
    for(int i=0;i<n;i++)
        cin>>finish[i];

    vector<pair<int,int>> act;
    for(int i=0;i<n;i++){
        act.push_back({finish[i],start[i]});
    }

    sort(act.begin(),act.end());

    cout<<"\nSelected activities(start,finish):\n";

    int lastFinish=-1;
    int count = 0;

    for(int i=0;i<n;i++){
        if(act[i].second>=lastFinish){
            cout<<"("<<act[i].second<<","<<act[i].first<<")\n";
            lastFinish = act[i].first;
            count++;
        }
    }
  cout<<"\nTotal selected activities:"<<count;
  return 0;
}
