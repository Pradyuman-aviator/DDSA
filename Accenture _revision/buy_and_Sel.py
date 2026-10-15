class Solution(object):
    def maxProfit(self, prices):
        n = len(prices)
        BuyValue = min(prices)

        Buy_index = prices.index(min(prices))

        remaining = prices[Buy_index:]

        SellValue = max(remaining)

        return abs(BuyValue - SellValue)


        
            