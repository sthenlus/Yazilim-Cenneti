a = 1
b = 1
fibonacci = [a,b]

z = int(input("Kaç Tane Fibonacci sayılı dizi bulmak istiyorsunuz: "))

for i in range(z - 2):

    a,b = b,a+b

    fibonacci.append(b)
print(fibonacci)
