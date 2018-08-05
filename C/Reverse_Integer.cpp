//Given a 32-bit signed integer, reverse digits of an integer
//Example 1:
//Input: 123
//Output: 321
//Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
//Time:  O(1)
//Space: O(1)


class Solution {
public:
    int reverse(int num) {
        
    bool neg_flag = false;
    if (num < 0)
    {
        neg_flag = true;
        num = -num ;
    }
 
    int prev = 0, rev_num = 0;
    while (num != 0)
    {
        int cur = num%10;
 
        rev_num = (rev_num*10) + cur;

        if ((rev_num - cur)/10 != prev)
        {
            return 0;
        }
 
        prev = rev_num;
        num = num/10;
    }
 
    return (neg_flag == true)? -rev_num : rev_num;
    }
};
