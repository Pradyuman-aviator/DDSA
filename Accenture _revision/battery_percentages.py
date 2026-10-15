class Solution(object):
    def countTestedDevices(self, batteryPercentages):
        n = len(batteryPercentages)

        tested = 0

        for i in range(n):
            if batteryPercentages[i] > 0:
                tested += 1

                for j in range(i + 1, n):
                    batteryPercentages[j] = max(
                        0, batteryPercentages[j] - 1
                    )

        return tested