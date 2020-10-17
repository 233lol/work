#include<cstdio>
#include<cmath>
#include<cstring>
#include<list>
#include<iostream>
#include<algorithm>
using namespace std;
class student{
	public:
		int num;
		char name[110];
		student(int t1,char t2[110]) {
			num=t1;
			memcpy(name,t2,sizeof name);
		}
		void p() {
			printf("%d %s ",num,name);
		}
};
int f;
struct node{
	bool operator()(const student& t1,const student& t2){
		return t1.num<t2.num;
	}
};
bool match(student p) {
	return p.num==f;
}
int main() {
	list<student> a;
	while (1) {
		int x;
		char y[110];
		scanf("%d%s",&x,&y);
		if(x==0) break;
		a.push_back(student(x,y));
	}
	while (1) {
		int x;
		char y[110];
		scanf("%d%s",&x,&y);
		if(x==0) break;
		f=x;
		a.remove_if(match);
	}
	list<student>::iterator i;
	for (i=a.begin();i!=a.end();++i) {
		student a=*i;
		a.p();
	}
	return 0;                       
} 