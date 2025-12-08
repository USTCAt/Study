#include <stdio.h>
#include <string.h>

int main() {
    int i, num1, num2, res;
    char op, first[10];
    
    scanf("%d", &i);
    
    for (int idx = 0; idx < i; idx++) {
        scanf("%s", first);
        
        if (first[0] == 'a' || first[0] == 'b' || first[0] == 'c') {
            // 三个数据的情况
            if (first[0] == 'a') op = '+';
            else if (first[0] == 'b') op = '-';
            else op = '*';
            
            scanf("%d %d", &num1, &num2);
        } else {
            // 两个数据的情况
            num1 = atoi(first);
            scanf("%d", &num2);
        }
        
        // 计算结果
        if (op == '+') res = num1 + num2;
        else if (op == '-') res = num1 - num2;
        else res = num1 * num2;
        
        // 计算总长度
        int len = 0;
        len += printf("%d%c%d=%d", num1, op, num2, res);
        printf("\n%d\n", len);
    }
    
    return 0;
}