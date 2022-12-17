print("""***************

Mükemmel Sayı Tanımlama Programına Hoşgeldiniz.

çıkmak için q ya basınız
***************""")

while True:
    bölümler = []
    a = int(input("Bir Sayı Giriniz: "))
    if a == "q":
        break
    for i in range(1,a):
        if a%i == 0:
            bölümler.append(i)
    if sum(bölümler) == a :
        print("{} bu sayı Mükemmel Sayıdır.".format(a))
    elif sum(bölümler) != a:
        print("{} bu sayı Mükemmel Sayı Değildir.".format(a))
