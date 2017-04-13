#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
int main(){
int num,i,a,b;
int aha=0;
ifstream in("filein.txt",ios::in);
in>>num;
vector<int>cow(num);
for(i=0;i<num;i++){
in>>cow.at(i);
}
sort(cow.begin(),cow.end());
vector<int>coww(num);
for(a=0;a<num;a++){
coww.at(a)=cow.at(num-a-1);
}
for(b=0;b<5;b++){
aha=aha+coww.at(b);
}
cout<<aha;

return 0;
}
