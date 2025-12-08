#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;
#define MAXSIZE 10001
int compare(const void* a,const void* b)
{
	int* f1=(int*) a;
	int* f2=(int*) b;
	int num1=*f1;
	int num2=*f2;
	if(num1>num2)
		return 1;
	if(num1<num2)
		return -1;
	return 0;
	
}
int main()
{	
	int N,i,j;
	int fruit[10001]={0};
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&fruit[i]);
	}
	qsort(fruit,N,sizeof(int),compare);
	int size=N;
	int move[size];
	for(j=0;j<size;j++){
		move[j]=fruit[j];
	}
	int totalstrength=0;
	int strength=0;
	while(size!=0){
		if(size==1)
		{
//			strength=move[0]+strength;
//			totalstrength+=strength;
			break;
		}
		else
		{
			strength=move[0]+move[1];
			totalstrength+=strength;
			for(i=0;i<size-1;i++)
			{
				move[i]=move[i+1];
			}
			size=size-1;
//			printf("第1次相加:%d ",strength);
//			
			for(i=0;i<size-1;i++)
			{
				move[i]=move[i+1];
			}
			size=size-1;
//			printf("第2次相加:%d ",totalstrength);
//			
			move[size-1]=strength;
			size++;
			qsort(move,size,sizeof(int),compare);
		}
	}
	printf("%d",totalstrength);	
	
	return 0;
}
