class Solution(object):
    def isHappy(self, n):

        seen = set()

        def solve(n):
            m = str(n)
            p = 0

            for c in m:
                p += int(c) ** 2

            if p == 1:
                return True

            if p in seen:
                return False

            seen.add(p)

            return solve(p)

        return solve(n)