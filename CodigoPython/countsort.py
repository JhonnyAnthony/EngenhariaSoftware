def counting_sort(arr, max_value):
    """
    Counting sort estável. Assuma inteiros não-negativos por padrão.
    Se max_value for None, é calculado a partir do array.
    Retorna uma nova lista ordenada.
    Complexidade: O(n + k) onde k = max_value + 1.
    """
    if not arr:
        return []
    if max_value is None:
        max_value = max(arr)
    if min(arr) < 0:
        raise ValueError("Counting sort aqui assume valores não-negativos. Ajuste os dados.")

    k = max_value + 1
    count = [0] * k
    for v in arr:
        count[v] += 1
    for i in range(1, k):
        count[i] += count[i - 1]
    out = [0] * len(arr)
    for v in reversed(arr):
        count[v] -= 1
        out[count[v]] = v
    return out

if __name__ == "__main__":
    exemplo = [5, 2, 9, 1, 5, 6]
    print("Counting:", counting_sort(exemplo,None))
