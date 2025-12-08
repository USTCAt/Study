#include<stdio.h>
#include<string.h>
int main(){
	int m[10000],p[10000];
	int n;
	memset(p,0,sizeof(p));
	scanf("%d",&n);
	
	int indexp = 0; // 总和数组的长度
	
	for(int a=1;a<=n;a++){
		// 重置m数组和indexm，放在内层循环之前
		memset(m,0,sizeof(m));
		int indexm = 0;
		
		// 初始化m为1
		m[0] = 1;
		indexm = 1;
		
		// 计算a的阶乘
		for(int i=1;i<=a;i++){
			// 每一位乘以当前数
			for(int j=0;j<indexm;j++){
				m[j]=m[j]*i;
			}
			
			// 处理进位
			for(int l=0;l<indexm+10;l++){
				m[l+1]=m[l+1]+(m[l]/10);
				m[l]=m[l]%10;
			}
			
			// 更新数字长度
			for(int l=indexm+9;l>=0;l--){
				if(m[l]!=0){
					indexm = l+1;
					break;
				}
			}
		}
		
		// 将阶乘结果累加到总和数组p
		for(int j=0; j<indexm; j++){
			p[j] = p[j] + m[j];
		}
		
		// 处理总和的进位
		for(int e=0; e<indexm+10; e++){
			p[e+1] = p[e+1] + (p[e]/10);
			p[e] = p[e] % 10;
		}
		
		// 更新总和数组的长度
		for(int l=indexm+9; l>=0; l--){
			if(p[l] != 0){
				indexp = l+1;
				break;
			}
		}
	}
	
	// 输出结果
	for(int i=indexp-1;i>=0;i--){
		printf("%d",p[i]);
	}
	
	return 0;
}
