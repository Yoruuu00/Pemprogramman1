input_str = input("")
a, b, i, j, x, y = map(int, input_str.split())

HASIL = round(((a - b) * i / j - (x + y)), 3)

print(f"{HASIL:.3f}")
