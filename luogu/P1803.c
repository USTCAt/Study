#include<stdio.h>
#include<stdlib.h>
struct comp
{
	int starttime;
	int endtime;
};
int compare(const void *a, const void *b) {
	struct comp *c1 = (struct comp *)a;
	struct comp *c2 = (struct comp *)b;
	return c1->endtime - c2->endtime;
}
int main()
{
	struct comp c[1000001];
	int N;
	int i;
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d %d",&c[i].starttime,&c[i].endtime);
	}
	qsort(c,N,sizeof(struct comp),compare);
	int doing=c[0].endtime;
	int total=1;
	for(int i=1;i<N;i++){
		
		if(c[i].starttime>=	doing)
		{
			total++;
			doing=c[i].endtime;
		}
	}
	printf("%d\n",total);
	return 0;
}
