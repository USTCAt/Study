#include <stdio.h>
#include <stdlib.h>

int main() {
	int W, X, H;
	scanf("%d %d %d", &W, &X, &H);
	long long total = 1LL * W * X * H;  // 防止溢出
	
	int q;
	scanf("%d", &q);
	
	for (int i = 0; i < q; i++) {
		int x1, y1, z1, x2, y2, z2;
		scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
		
		// 确保 x1 <= x2 等（虽然 abs 可以处理，但显式更清晰）
		int dx = abs(x1 - x2) + 1;
		int dy = abs(y1 - y2) + 1;
		int dz = abs(z1 - z2) + 1;
		
		long long volume = 1LL * dx * dy * dz;
		total -= volume;
	}
	
	printf("%lld\n", total);  // 注意格式符
	return 0;
}
