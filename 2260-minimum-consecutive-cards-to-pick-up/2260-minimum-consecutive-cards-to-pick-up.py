class Solution:
    def minimumCardPickup(self, cards: List[int]) -> int:
        dp = dict()
        result = 10**5 + 1
        for i in range(len(cards)):
            if cards[i] in dp:
                result = min(result, i - dp[cards[i]] + 1)
            dp[cards[i]] = i
        return -1 if result == 10**5 + 1 else result