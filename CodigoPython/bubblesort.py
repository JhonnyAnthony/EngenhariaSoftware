def bubble_sort(arr):
    """
    Bubble sort (in-place).
    Complexidade: O(n^2). Estável.
    Retorna a mesma lista ordenada.
    """
    n = len(arr)
    for i in range(n):
        swapped = False
        for j in range(0, n - 1 - i):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        if not swapped:
            break
    return arr

if __name__ == "__main__":
    exemplo = [5, 2, 9, 1, 5, 6]
    print("Bubble:", bubble_sort(exemplo.copy()))
