def max_bilangan(x, y, i, j):
    max_bilangan = x

    if y > max_bilangan:
        max_bilangan = y

    if i > max_bilangan:
        max_bilangan = i

    if j > max_bilangan:
        max_bilangan = j

    return max_bilangan

a, b, c, d = map(int, input("Masukkan bilangan : ").split(" "))
bilangan_max = max_bilangan(a, b, c, d) 
print("Bilangan Maksimal :", bilangan_max)
