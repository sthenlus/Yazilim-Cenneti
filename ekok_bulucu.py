def ekok_bulucu(a,b):
    ekok = 1
    i = 2
    while True:
        if (a % i == 0 and b % i == 0):
            ekok *= i
            a //= i
            b //= i
        elif (a % i == 0 and b % i != 0):
            ekok *= i
            a //= i
        elif (a % i != 0 and b % i == 0):
            ekok *= i
            b //= i
        else:
            i += 1
        if a == 1 and b ==1:
            break
    return ekok


a = int(input("İlk sayıyı giriniz: "))
b = int(input("İkinci Sayıyı Giriniz: "))


print(ekok_bulucu(a,b))
