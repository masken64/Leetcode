class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freqmap = defaultdict(int)
        topmap = [[] for i in range(len(nums)+1)]
        topk = []

        for n in nums:
            freqmap[n]+=1

        for n,f in freqmap.items():
            topmap[f].append(n)

        for item in reversed(topmap):
            for num in item:
                topk.append(num)
                if len(topk)>=k:
                    return topk