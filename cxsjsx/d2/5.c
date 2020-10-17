#include <stdio.h> 
#include <malloc.h> 
#define LEN sizeof(struct Student) 
struct Student 
{ 
    int num; 
    float score; 
    struct Student *next; 
}; 
int n; 
struct Student * create(); 
void print(struct Student * head); 
struct Student * del(struct Student * head, int num) 
{ 
    struct Student  *p1, *p2; 
    int flag=0;
    p1 = p2 = (struct Student*)malloc(LEN); 
    if(head->num==num){
        return head->next;
 }
  p1=head;
     while(p1->next!= NULL) 
    { 
        
        p2=p1->next;
        if(p2->num==num){
         p1->next=p2->next;
         flag=1;
         return head;
  }else {
   p1=p2;
  }
        
    } 
} 
struct Student * insert(struct Student * head) 
{ 
    
 struct Student  *p1, *p2,*p3; 
    
    p1 = (struct Student*)malloc(sizeof(struct Student)); 
    scanf("%ld%f",&p1->num,&p1->score);
    p2=head;
    if(head==NULL){
     head=p1;
     p1->next=NULL;
 } else {
  while(p1->num>p2->num&&p2->next!=NULL){
   p3=p2;
   p2=p2->next;
   
  }
  if(p1->num<p2->num){
   if(head==p2){
    head=p1;
    p1->next=p2; 
   }else{
    p3->next=p1;
    p1->next=p2;
   }
   
  }else{
   
    p2->next=p1;
    p1->next=NULL;
   }
    
 }
   return head;
} 
int main() 
{ 
    struct Student *head; 
    int num; 
    
    head = create(); 
    scanf("%d", &num); 
    print(head); 
    printf("\n");
    head = del(head, num); 
    head=insert(head);
    print(head); 
    return 0; 
} 
struct Student * create() 
{ 
    struct Student *head, *p1, *p2; 
    n = 0; 
    p1 = p2 = (struct Student*)malloc(LEN); 
    scanf("%d %f", &p1->num, &p1->score); 
    head = NULL; 
    while(p1->num != 0) 
    { 
        n = n + 1; 
        if(n == 1) 
            head = p1; 
        else 
            p2->next = p1; 
        p2 = p1; 
        p1 = (struct Student*)malloc(LEN); 
        scanf("%d %f", &p1->num, &p1->score); 
    } 
    p2->next = NULL;  
    return head;   
} 
void print(struct Student * head) 
{ 
    struct Student * p; 
    p = head; 
    if(head != NULL) 
    { 
        do{ 
            printf("%d %.1f ", p->num, p->score); 
            p = p->next; 
        }while(p != NULL); 
    } 
}