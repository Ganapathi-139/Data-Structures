//-------------call by value----------------------//
/*#include <stdio.h>
struct st
{
    int marks;
};
void ubdate(struct st s)
{
    s.marks = 90;
}
int main()
{
    struct st s1;
    s1.marks = 50;
    ubdate(s1);
    printf("marks = %d", s1.marks);
    return 0;
}*/

//-------------call by Reference----------------------//
/*#include <stdio.h>
struct st
{
    int marks;
};
void ubdate(struct st *s)
{
    s->marks = 90;
}
int main()
{
    struct st s1;
    s1.marks = 50;
    ubdate(&s1);
    printf("marks = %d", s1.marks);
    return 0;
}*/