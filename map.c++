#include<bits/stdc++.h>
using namespace std;
int main()
{
map<int, string>m;
m[1]="ABC";
m[2]="DEF";
m[3]="HIJ";
m[4]="KLM";
map<int, string>::iterator it;
for(it=m.begin();it!=m.end();++it)
{
cout<<(*it).first<<" "<<(*it).second<<endl;
}
}
