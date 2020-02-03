#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	map<string,int> m;
	string a;int k=0;
	map<int,string>ans;
	m["January"]=1;
	m["February"]=2;
	m["March"]=3;
	m["April"]=4;
	m["May"]=5;
	m["June"]=6;
	m["July"]=7;
	m["August"]=8;
	m["September"]=9;
	m["October"]=10;
	m["November"]=11;
	m["December"]=0;
	ans[1]="January";
	ans[2]="February";
	ans[3]="March";
	ans[4]="April";
	ans[5]="May";
	ans[6]="June";
	ans[7]="July";
	ans[8]="August";
	ans[9]="September";
	ans[10]="October";
	ans[11]="November";
	ans[0]="December";
	cin>>a>>k;
	k=(m[a]+k)%12;
	cout<<ans[k];
	return 0;
}
