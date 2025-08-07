class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        orig_len = len(nums)
        new_len = len(set(nums))
        if orig_len == new_len:
            return False

        return True       