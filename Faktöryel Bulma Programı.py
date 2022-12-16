print("""****************
Faktöryel Bulma Programı

çıkmak için q ya basın


****************""")

while True:
    sayı = input("Sayı:")
    if sayı == "q":
        print("Programdan Çıkılıyor...")
        break
    else:
        sayı = int(sayı)

        faktöriyel = 1

        for i in range(2,sayı+1):
            faktöriyel *= i
        print("Faktöriyel", faktöriyel)
