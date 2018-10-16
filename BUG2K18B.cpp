#include<bits/stdc++.h>
using namespace std;

void conmpute(char ct[],char a_t[],int t,int d)
{
    pair<int,int> poh;
    pair<int,int>asli;
    poh=make_pair(((int)ct[0]-48)*10+(int)ct[1]-48,((int)ct[3]-48)*10+(int)ct[4]-48);
    asli=make_pair(((int)a_t[0]-48)*10+(int)a_t[1]-48,((int)a_t[3]-48)*10+(int)a_t[4]-48);
    poh.first=poh.first+(t/60);
    if(poh.first>=24)
        poh.first=poh.first-24;
    poh.second=poh.second+(t%60);
    if(poh.second>=60){
        poh.second=poh.second-60;
        poh.first=poh.first+1;
    }
    asli.first=asli.first+(d/60);
    if(asli.first<0)
        asli.first=asli.first+24;
    else if(asli.first>=24)
        asli.first=asli.first-24;
    asli.second=asli.second+(d%60);
    if(asli.second>=60){
        asli.second=asli.second-60;
        asli.first=asli.first+1;
    }
    else if(asli.second<0){
        asli.second=60+asli.second;
        asli.first=asli.first-1;
    }
    if(poh.first<asli.first)
    {
        cout<<"Yes"<<endl;
    }
    else if(poh.first==asli.first&&poh.second<=asli.second)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
}
int main()
{
    int T,timee,delay;
    char ct[100],a_t[100];
    cin>>T;
    while(T--){
        scanf("%s",ct);
        cin>>timee;
        scanf("%s",a_t);
        cin>>delay;
    conmpute(ct,a_t,timee,delay)    ;
    }
    return 0;
}
