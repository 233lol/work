#include<cstdio>
#include<cmath>
#include<cstring>
#include<list>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;
class student{
	public:
		int num;
		float score;
		student(int t1,float t2) {
			num=t1,score=t2;
		}
		void p() {
			printf("%d %.1f ",num,score);
		}
};
struct node{
	bool operator()(const student& t1,const student& t2){
		return t1.num<t2.num;
	}
};
int main() {
	list<student> a;
	while (1) {
		int x;
		float y;
		scanf("%d%f",&x,&y);
		if(x==0) break;
		a.push_back(student(x,y));
	}
	while (1) {
		int x;
		float y;
		scanf("%d%f",&x,&y);
		if(x==0) break;
		a.push_back(student(x,y));
	}
	a.sort(node());
	list<student>::iterator i;
	for (i=a.begin();i!=a.end();++i) {
		student a=*i;
		a.p();
	}
	return 0;                       
} 