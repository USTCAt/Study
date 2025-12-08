#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int stu[1001][3];
	int total[1001];
	int count=0;
	for(i = 0;i < n ; i++)
	{
		scanf("%d %d %d",&stu[i][1],&stu[i][2],&stu[i][3]);
		total[i]=stu[i][1]+stu[i][2]+stu[i][3];
	}
	for(j=0;j<n;j++){
		for(k=j+1;k<n;k++)
		{
			if(abs(stu[k][1]-stu[j][1])<=5 && abs(stu[k][2]-stu[j][2])<=5 && abs(stu[k][3]-stu[j][3])<=5 && abs(total[j]-total[k])<=10 )
			{
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}
