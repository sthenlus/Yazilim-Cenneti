def ebob(a,b):
    ilkbolenler = []
    ikincibolenler = []
    son = []
    for i in range(1, a+1):
        if a % i == 0:
            ilkbolenler.append(i)
    for x in range(1, b+1):
        if b % x == 0:
            ikincibolenler.append(x)
    for n in ikincibolenler:
        for g in ilkbolenler:
            if n == g:
                son.append(n)
    return max(son)
x = int(input("Birinci Sayıyı Giriniz: "))
y = int(input("İkinci Sayıyı Giriniz: "))
print(ebob(x, y))
