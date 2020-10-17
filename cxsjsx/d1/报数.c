#include<stdio.h> 
#include<malloc.h>
struct stu
{
	int num;
	
	struct stu *next;
};
struct stu *head;
struct stu *last;
struct stu creat()
{
	head=(struct stu *)malloc(sizeof (struct stu));
	last = head;
	head->next=head;
	
}
struct stu addlist( int num)
{
	struct stu *p = (struct stu *)malloc(sizeof(struct stu));
    p->num = num;
    p->next = head;
    last->next = p;
    last = p;
}
struct stu cric()
{
	struct stu *p = head;
    last->next = head->next;
    head = head->next;
    free(p);
}
struct stu three()
{
	struct stu *p1 = head;
    struct stu *p2 = p1->next;
    struct stu *p3 = p2->next;
    while(p1->next != p1)
    {
        p2 = p1->next;
        p3 = p2->next;
        p2->next = p3->next;
        p1 = p2->next;
    }
    printf("%d\n",p1->num);
}
int main()
{
	int a;
	scanf("%d",&a);
	creat();
	for(int i=1;i<=a;i++)
	{
		addlist(i);
	}
	cric();
	three();
}