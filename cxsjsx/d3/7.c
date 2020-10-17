#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct _foruse
{
    struct _foruse* next;
    int number;
}foruse, *link;
link create(int n)
{
    link head = (link)malloc(sizeof(foruse));
    foruse *tail;
    int i;
    head->next = head;
    head->number = 1;
    tail = head;
    for(i = 2; i <= n; i++)
    {
        foruse *p = (foruse*)malloc(sizeof(foruse));
        p->number = i;
        p->next = tail->next;
        tail->next = p;
        tail = p;
    }
    return head;
}
void joseph(link head, int k, int m)
{
    int j;
	foruse *p;
	foruse *q;
	if(m == 1 && k == 1)
	{
		p = head;
		while(p->next != head)
		{
			printf("%d ",p->number);
			q = p->next;
			free(p);
			p = q;
		}
		printf("%d\n",p->number);
	}
	else if(m == 1 && k != 1)
	{
		p = head;
		for(j=1; j<k-1; j++)
			p = p->next;
		while(head->next != head)
		{
			q = p->next;
			p->next = q->next;
			printf("%d ",q->number);
			if(q == head)
				head = q->next;
			free(q);
		}
		printf("%d\n",head->number);
	}
	else
	{
		p = head;
		for(j=1; j<k; j++)
			p = p->next;
		while(head->next != head)
		{
			for(j=1; j<m-1; j++)
				p = p->next;
			q = p->next;
			p->next = q->next;
			printf("%d ",q->number);
			if(q == head)
				head = q->next;
			free(q);
			p = p->next;
		}
		printf("%d\n",head->number);
	}
}
int main()
{
    link head;
    int m, n, k;
    scanf("%d%d%d", &n, &m, &k);
    head = create(n);
    joseph(head, k, m);
    return 0;
}