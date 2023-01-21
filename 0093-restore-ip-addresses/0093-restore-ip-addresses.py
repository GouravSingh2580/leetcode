class Solution:
    def restoreIpAddresses(self, s):
        """
        :type s: str
        :rtype: List[str]
        """
        ret = []
        r = [1, 2, 3]
        for a in r:
            for b in r:
                for c in r:
                    for d in r:
                        if a + b + c + d != len(s):
                            continue
                        nums_str = [s[:a], s[a:a+b], s[a+b:a+b+c], s[a+b+c:]]
                        nums_int = [int(x) for x in nums_str if int(x)<256]
                        if len(nums_int) != 4:
                            continue
                        nums_str_without_prefix = [str(x) for x in nums_int]
                        if nums_str != nums_str_without_prefix:
                            continue
                        ret.append('.'.join(nums_str))

        return ret