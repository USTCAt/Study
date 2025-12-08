#include <stdio.h>
#include <stdlib.h>
struct G{
	double totalkg;
	double totalprice;
	double price;
};


int main(){
	int N;
	double T;
	int i,j;
	struct G gold[101];
	scanf("%d %lf",&N,&T);
	for(i=0;i<N;i++){
		scanf("%lf %lf",&gold[i].totalkg,&gold[i].totalprice);
		gold[i].price=gold[i].totalprice/gold[i].totalkg;
	}
	for(i=0;i<N;i++){
		for(j=0;j<N-1-i;j++){
			if(gold[j].price<gold[j+1].price)
			{
				struct G temp;
				temp=gold[j];
				gold[j]=gold[j+1];
				gold[j+1]=temp;
				
			}
		}
	}
	double iniT=0;
	double finalprice=0;
	for(i=0;i<N;i++){
		if(iniT+gold[i].totalkg>T)
		{
			break;
		}
		else
		{
			iniT=iniT+gold[i].totalkg;
			finalprice+=gold[i].totalprice;
			
		}
	}
	if(iniT<T){
		finalprice+=(T-iniT)*gold[i].price;
	}
	printf("%.2lf",finalprice);
	
	
	return 0;
}
