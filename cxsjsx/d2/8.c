#include <stdio.h>
#include <malloc.h>          
#define LEN sizeof(struct Student)
struct Student
{
    int num;
    float score;
    struct Student *next;
};
int n = 0;
void print(struct Student * head);
struct Student * insert(struct Student * head, struct Student * stud)
{
     ///程序填空，请将该函数填写完整
}
int main()
{
    struct Student *head = NULL, *stud;
    int num;
    float score;
    while(1)
    {
        scanf("%d %f", &num, &score);
        if(num == 0)
            break;
        stud = (struct Student*)malloc(LEN);
        stud->num = num;
        stud->score = score;
        head = insert(head, stud);
    }
    print(head);
    return 0;
}
void print(struct Student * head)
{
    struct Student * p;
    p = head;
    if(head != NULL)
    {
        do{
            printf("%d %.1f\n", p->num, p->score);
            p = p->next;
        }while(p != NULL);
    }
}