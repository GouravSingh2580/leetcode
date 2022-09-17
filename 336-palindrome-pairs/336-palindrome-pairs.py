class Solution:
    def palindromePairs(self, words: List[str]) -> List[List[int]]:
        isPalindrome, indexOf, res = lambda x: x == x[::-1] , {w:i for i,w in enumerate(words)}, []
        
        # case 1: empty string exists
        if '' in indexOf: res.extend([(indexOf[''],i) for i in range(len(words)) if isPalindrome(words[i])])

        # # case 2: reverse of a string exists
        res.extend([(i,indexOf[words[i][::-1]]) for i in range(len(words)) if words[i][::-1] in indexOf])
        
        # case 3: reverse of a prefix exists and suffix is palindrome  
        res.extend([(i,indexOf[words[i][:k][::-1]]) for i in range(len(words)) for k in range(len(words[i])) if words[i][:k][::-1] in indexOf and isPalindrome(words[i][k:])])
        
        # case 4: reverse of my suffix exists and prefix is palindrome
        res.extend([(indexOf[words[i][k:][::-1]],i) for i in range(len(words)) for k in range(len(words[i])) if words[i][k:][::-1] in indexOf and isPalindrome(words[i][:k])])
        
        return list(set([(i,j) for i,j in res if i!=j]))
