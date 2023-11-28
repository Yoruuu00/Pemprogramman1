def reverse_number(number):
    reversed_number = 0

    while number != 0:
        reversed_number = (reversed_number) * 10 + (number % 10)
        number //= 10

    return reversed_number

A, B = map(int, input("Masukkan bilangan : ").split(" "))

reversed_A = reverse_number(A)
reversed_B = reverse_number(B)

result = reversed_A + reversed_B

print(f"Hasilnya adalah : {reverse_number(result)}")
