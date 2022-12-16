print("""**************** 
KULLANICI GİRİŞİ PROGRAMI
****************""")

sys_kullanıcı_adı = "hhalil"

sys_parola = "12345"
giris_hakki = 3

while True:
    kullanıcı_adı = input("Kullanıcı adı:")
    parola = input("Parola:")
    if (kullanıcı_adı == sys_kullanıcı_adı and parola != sys_parola):
        print("Parolanız Yanlış...")
        giris_hakki -=1
    elif (kullanıcı_adı != sys_kullanıcı_adı and parola == sys_parola):
        print("Kullanıcı Adınız Yanlış...")
        giris_hakki -=1
    elif (kullanıcı_adı != sys_kullanıcı_adı and parola != sys_parola):
        print("Kullanıcı Adı ve Parolanız Yanlış...")
        giris_hakki -=1
    else:
        print("Başarıyla Giriş Yapıldı...")
        break
    if giris_hakki == 0:
        print("Başka Giriş Hakkı kalmadı yallah!")
