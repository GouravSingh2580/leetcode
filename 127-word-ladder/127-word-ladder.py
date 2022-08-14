class Solution(object):
    def ladderLength(self, b, e, w):
        def recurse(w, cur, depth):
            return -depth if not cur else e in cur or 1 + recurse(w - cur, w - cur & {W[:i] + l + W[i + 1:] 
                        for l in string.ascii_lowercase 
                        for i in range(len(b)) 
                        for W in cur}, depth + 1)
        return recurse(set(w), set([b]), 0)
