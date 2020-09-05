def chunkify(s, n, fill='x'):
    res = []
    lenght = (len(s) / n)
    filler = n - (len(s) % n)
    if filler < n:
        lenght += 1

    first = 0
    for x in range(0, lenght):
        second = n * (x + 1)
        res.append(s[first:second])
        first = second

    if filler < n:
        for x in range(0, filler):
            res[lenght - 1] += fill

    return res


if __name__ == "__main__":
    print(chunkify('ABCDEFG', 3))
    print(chunkify('ABCDEFG', 2))
    print(chunkify('ABC', 1))