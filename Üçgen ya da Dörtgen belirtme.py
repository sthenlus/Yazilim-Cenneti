iş = input("Hangi Şekli İstiyorsunuz: ")

if iş=="Dörtgen" or iş == "dörtgen":
    ilk_kenar = int(input("İlk Kenarı Giriniz: "))
    ikinci_kenar = int(input("İkinci Kenarı Giriniz: "))
    ucuncu_kenar = int(input("Üçüncü Kenarı Giriniz: "))
    dorduncu_kenar = int(input("Dördüncü Kenarı Giriniz: "))
    if ilk_kenar <=0 or ikinci_kenar<=0 or ucuncu_kenar<=0:
        print("Kare belirtmiyor")
    elif ilk_kenar == ucuncu_kenar and ikinci_kenar==dorduncu_kenar and ilk_kenar == ikinci_kenar:
        print("Şekliniz Kare")
    elif ilk_kenar == ucuncu_kenar and ikinci_kenar==dorduncu_kenar and ilk_kenar != ikinci_kenar:
        print("Şekliniz Dikdörtgen")
    else:
        print("Şekliniz Sıradan bir Dörtgen")

elif iş=="Üçgen" or iş=="üçgen":
    ilk_kenar = int(input("İlk Kenarı Giriniz: "))
    ikinci_kenar = int(input("İkinci Kenarı Giriniz: "))
    ucuncu_kenar = int(input("Üçüncü Kenarı Giriniz: "))
    if ilk_kenar <=0 or ikinci_kenar<=0 or ucuncu_kenar<=0:
        print("Üçgen belirtmiyor")
    elif abs(ilk_kenar - ucuncu_kenar)< ikinci_kenar < ucuncu_kenar + ilk_kenar:
        if ilk_kenar == ikinci_kenar == ucuncu_kenar:
            print("Şekliniz Eşkenar Üçgendir")
        elif ilk_kenar== ucuncu_kenar and ilk_kenar != ikinci_kenar:
            print("Şekliniz İkizkenar Üçgendir")
        else:
            print("Şekliniz Normal Bir Üçgendir")
    else:
        print("Üçgen Belirtmiyor")
else:
    print("Tanınmayan Şekil!!!")
