# You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
# If a string is longer than the other, append the additional letters onto the end of the merged string.
# Return the merged string.
class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        merged = ""
        if(len(word1) == len(word2)):
            loop = len(word1)
            append = ""
        elif(len(word1) < len(word2)):
            loop = len(word1)
            append = word2[loop:]
        else:
            loop = len(word2)
            append = word1[loop:]
        for i in range (loop):
            merged += word1[i] + word2[i]
        return merged + append
