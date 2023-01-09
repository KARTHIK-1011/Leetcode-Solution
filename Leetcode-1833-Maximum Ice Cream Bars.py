class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        n=len(costs)
        costs.sort()
        count=0
        for i in range(n):
            if(costs[i]<=coins):
                coins=coins-costs[i]
                count+=1
            else:
                break
        return count