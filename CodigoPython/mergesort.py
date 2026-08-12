def merge_sort(arr):
    """
    Merge sort (não in-place). Estável. Complexidade: O(n log n).
    Retorna uma nova lista ordenada.
    """
    if len(arr) <= 1:
        return arr[:]
    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])

    i = j = 0
    merged = []
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            merged.append(left[i]); i += 1
        else:
            merged.append(right[j]); j += 1
    if i < len(left):
        merged.extend(left[i:])
    if j < len(right):
        merged.extend(right[j:])
    return merged

if __name__ == "__main__":
    exemplo = [5, 2, 9, 1, 5, 1, 6]
    print("Merge:", merge_sort(exemplo))
