
#
# The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: 
# (you may want to display this pattern in a fixed font for better legibility)
# 
# P   A   H   N
# A P L S I I G
# Y   I   R
# And then read line by line: "PAHNAPLSIIGYIR"
# Write the code that will take a string and make this conversion given a number of rows:
#string convert(string s, int numRows);

# Time:  O(n)
# Space: O(1)

class Solution:
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
                
        if numRows == 1:
            return s
        
        rows = ["" for i in range(numRows)]
        
        direction = -1
        row = 0
        for i in range(len(s)):
            
            rows[row]+=s[i]
            if (row == 0 or row==numRows-1):
                direction *= -1
            row+=direction
            
        return "".join(rows)

if __name__ == "__main__":
	print (Solution().convert("PAYPALISHIRING", 4))
