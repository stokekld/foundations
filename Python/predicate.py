def is_odd(number):
    if number % 2 == 0:
        return False
    return True

def partition(seq, pred):
    trues = []
    falses = []
    for x in seq:
        if pred(x):
            trues.append(x)
        else:
            falses.append(x)
    return falses, trues

if __name__ == "__main__":
    print(partition(range(10), is_odd))