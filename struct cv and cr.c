#include<stdio.h>
struct A{
	int x;
};
void increment(struct A a,struct A*b){
	a.x++;
	b->x++;
}
void main()
{
	struct A a={10};
	struct A b={10};
	increment(a,&b);
	printf("a.x%d\tb.x=%d",a.x,b.x);
}
