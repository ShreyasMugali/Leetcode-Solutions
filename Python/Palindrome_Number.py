#Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward
#Input: -121
#Output: false
#Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

#Time=O(1)
#Space =O(1)

class Solution:
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if (x<0 or (x!=0 and x%10==0)):
            return False
        original=x
        rev=0
        while(x):
            rev=rev*10+x%10
            x//=10

        return rev==original
		
if __name__ == "__main__":
	print (Solution().isPalindrome(121))
	