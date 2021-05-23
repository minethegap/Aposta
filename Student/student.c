#include <stdlib.h>
#include <stdio.h>

/* write a structure to obtain name and score */

struct student
{
    char name[20];
    char studentId[20];
    int math, eng;
    struct student *next;
} s1, s2;

int main()
{
    typedef struct student s_data;
    s_data *ptr;                                /* store pointer */
    s_data *head;                               /* list head pointer */
    s_data *new_data;                           /* allocat pointer of new elements */

    head = (s_data*) malloc(sizeof(s_data));    /* new element with list head  */
    ptr = head;                                 /* setting store pointer position */

    ptr->next = NULL;
    int select;

    do
    {
        printf("(1)New (2)Exit =>");
        scanf("%d", &select);

        if(select!=2)
        {
            printf("Name No Math Eng:");
            scanf("%s%s%d%d", ptr->name, ptr->studentId, &ptr->math, &ptr->eng);

            new_data=(s_data*)malloc(sizeof(s_data));   // new next element 
            ptr->next = new_data;                       // set store point as allocate of new element
            new_data->next = NULL;                      // pre setting to null by next element of next type
            ptr = ptr->next;    

        }
    } while (select != 2 );
    
    // Traversal students of Link list
    ptr = head;                                         // set access pointer from head 
        while (ptr->next != NULL)
        {
            printf("Name: %s\t No: %s\tMath: %d\tEng: %d\n", 
                                                ptr->name, ptr->studentId, ptr->math, ptr->eng);
            head = head->next;                          // move head to next 
            ptr = head; 
        }

    return 0;
}



