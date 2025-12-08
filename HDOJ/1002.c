/*
A + B Problem II
Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 599642    Accepted Submission(s): 114886


Problem Description
I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.
 

Input
The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.
 

Output
For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.
 

Sample Input
2
1 2
112233445566778899 998877665544332211
 

Sample Output
Case 1:
1 + 2 = 3

Case 2:
112233445566778899 + 998877665544332211 = 1111111111111111110
*/
#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int case_num = 1; case_num <= T; case_num++) {
        char a[1001], b[1001];
        scanf("%s %s", a, b);
        int len_a = strlen(a);
        int len_b = strlen(b);
        int max_len = len_a > len_b ? len_a : len_b;
        int result[1002] = {0};
        int carry = 0;
        for (int i = 0; i < max_len; i++) {
            int digit_a = (i < len_a) ? (a[len_a - 1 - i] - '0') : 0;
            int digit_b = (i < len_b) ? (b[len_b - 1 - i] - '0') : 0;
            int sum = digit_a + digit_b + carry;
            
            result[i] = sum % 10;
            carry = sum / 10;
        }
        if (carry > 0) {
            result[max_len] = carry;
            max_len++;
        }
        printf("Case %d:\n", case_num);
        printf("%s + %s = ", a, b);
        for (int i = max_len - 1; i >= 0; i--) {
            printf("%d", result[i]);
        }
        printf("\n");
        
        if (case_num < T) {
            printf("\n");
        }
    }
    
    return 0;
}