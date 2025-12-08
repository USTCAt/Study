    #include<stdio.h>
    #include<stdlib.h>
    int compare(const void *a, const void *b) {
        return (*(int *)a - *(int *)b);
    }

    int main()
    {
        
        int n;
        scanf("%d",&n);
        int T[5000];
        int K[5000];
        int price=0;
        for(int j = 0 ; j < n ; j++)
        {
            scanf("%d",&T[j]);
        }
        for(int k = 0 ; k < n ; k++)
        {
            scanf("%d",&K[k]);
        }
        qsort(T, n, sizeof(int), compare);
        qsort(K, n, sizeof(int), compare);
        // printf("田忌:");
        // for(int i=0;i<n;i++)
        // {
        //     printf("%d ",T[i]);
        // }
        // printf("\n");
        // printf("齐王:");
        // for(int i=0;i<n;i++)
        // {
        //     printf("%d ",K[i]);
        // }
        int indextf=n-1;
        int indexts=0;
        int indexqf=n-1;
        int indexqs=0;
        int result=0;
        while(indexqs <= indexqf && indexts <= indextf)
        {
            if(T[indextf]>K[indexqf])
            {
                result+=200;
                indexqf--;
                indextf--;
            }   
            else if(T[indextf]<K[indexqf])
            {
                result-=200;
                indexts++;
                indexqf--;
            }
            else if(T[indextf]==K[indexqf])
            {
                if(T[indexts]>K[indexqs])
                {
                    result+=200;
                    indexts++;
                    indexqs++;
                }
                else if(T[indexts]==K[indexqf]){
                    
                    indexts++;
                    indexqf--;
                }
                else{
                    result-=200;
                    indexts++;
                    indexqf--;
                }
            }
        }
        // printf("负场:%d 胜场:%d",indext,n-indext);
        // printf("田忌赢钱:%d，田忌输钱:%d，总利润:%d",(n-indext)*200,indext*(-200),(n-indext)*200+indext*(-200));
        if(result>=0)
            printf("%d",result);
        else
            printf("0");
        return 0;

    }