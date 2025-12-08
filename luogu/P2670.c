#include<stdio.h>
int main()
{
    int cols;
    int rows;
    char mine[105][105] = {0};
    
    scanf("%d %d", &rows, &cols);
    getchar();  // 吸收换行符
    
    // 读取地图（注意索引从1开始到rows/cols）
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= cols; j++)
        {
            scanf("%c", &mine[i][j]);
        }
        getchar();  // 吸收每行末尾的换行符
    }
    for(int i=1;i<=rows;i++)
    {
       for(int j = 1; j <= cols; j++)
        {
            if(mine[i][j] == '*') {
                continue;  // 地雷格子不需要处理
            }
            else if(mine[i][j] == '?')
            {
                mine[i][j] ='0';
                int count = 0;  // 统计周围地雷数量
                
                // 检查周围8个方向
                if(mine[i-1][j-1] == '*') count++;
                if(mine[i-1][j]   == '*') count++;
                if(mine[i-1][j+1] == '*') count++;
                if(mine[i][j-1]   == '*') count++;
                if(mine[i][j+1]   == '*') count++;
                if(mine[i+1][j-1] == '*') count++;
                if(mine[i+1][j]   == '*') count++;
                if(mine[i+1][j+1] == '*') count++;
                
                // 将数字转换为字符
                mine[i][j] = count + '0';
            }

        }
        
    }
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            printf("%c",mine[i][j]);
        }
        printf("\n");
    }
    return 0;
}