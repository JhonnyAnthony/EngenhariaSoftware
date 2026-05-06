import random

def quick_sort_inplace(arr, lo=0, hi=None):
    """
    Quick sort in-place with randomized pivot.
    Complexidade média: O(n log n), pior: O(n^2).
    """
    if hi is None:
        hi = len(arr) - 1
    if lo >= hi:
        return
    pivot_idx = random.randint(lo, hi)
    arr[pivot_idx], arr[hi] = arr[hi], arr[pivot_idx]
    pivot = arr[hi]

    i = lo
    for j in range(lo, hi):
        if arr[j] <= pivot:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
    arr[i], arr[hi] = arr[hi], arr[i]

    quick_sort_inplace(arr, lo, i - 1)
    quick_sort_inplace(arr, i + 1, hi)

def quick_sort(arr):
    copy = arr[:]
    quick_sort_inplace(copy)
    return copy

if __name__ == "__main__":
    exemplo = [5, 2, 9, 1, 5, 6]
    print("Quick:", quick_sort(exemplo))
