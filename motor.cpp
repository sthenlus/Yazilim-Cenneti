#include <iostream>

using namespace std;

class motor {

public:
    motor() {
        cout << "Default constructer çağrıldı" << endl;
        motor_omur = 0;
        yag_bakım = false;
    }

    motor(int motor_omur, int yag_bakım) {
        this->motor_omur = motor_omur;
        this->yag_bakım = yag_bakım;
    }

    void run() {
        cout << "Motor Çalıştı" << endl;
    }

    void setMotorOmur(int motor_omur) {
        this->motor_omur = motor_omur;
    }

    int getMotorOmur() {
        return motor_omur;
    }

    bool getYagBakim() {
        return yag_bakım;
    }

    void printomur() {
        cout << "Motor omru: " << getMotorOmur() << endl;
        cout << "Yag Bakımı: " << getYagBakim() << endl;
    }

private:
    int motor_omur;
    bool yag_bakım;
};

class arac : public motor {
private:
    string Arac_Markasi;
    int KmSayac{};

public:
    void setArac_Markasi(string Arac_Markasi) {
        this->Arac_Markasi = Arac_Markasi;
    }

    string getArac_Markasi() {
        return Arac_Markasi;
    }

    void SetKmSayac(int KmSayac) {
        this->KmSayac = KmSayac;
    }
    int GetKmSayac() {
        return KmSayac;
    }

    void printArac() {

        cout << "Aracin Markasi: " << getArac_Markasi() << endl;
        cout << "Aracin Kmsi: " << GetKmSayac() << endl;

    }

    void Saglam() {

        cout << "Aracın saglamlıgı " << GetKmSayac() * getMotorOmur() << endl;
    }

};

int main() {

    motor m1;
    arac a1;

    m1.setMotorOmur(10);

    m1.printomur();

    a1.setArac_Markasi("toyota");
    a1.setMotorOmur(20);
    a1.SetKmSayac(30);

    a1.printArac();
    a1.Saglam();
    
    return 0;
}
