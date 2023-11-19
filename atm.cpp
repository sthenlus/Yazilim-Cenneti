#include <iostream>
using namespace std;

int main() {
    int balance = 500;
    char selection{};

    do {
        cout << "-------------------------------------------" << endl;
        cout << "Programa hosgeldiniz.Lutfen yapmak istediginiz islemi seciniz." << endl;
        cout << "1.Bakiyeyi gor " << endl;
        cout << "2.Para yukle" << endl;
        cout << "3.Para cek" << endl;
        cout << "Q.Cikis yap" << endl;
        cout << "-------------------------------------------" << endl;
        int para = 0;
        cout << "Secimi yap: ";
        cin >> selection;
        if (selection == '1')
            cout << "Toplamda " << balance << " bakiyeniz var." << endl;
        else if (selection == '2') {
            cout << "Yukleyeceginiz parayi girin: ";
            cin >> para;

            balance += para;
            cout << "Para yüklendi.Ana menuye yonlendiriliyor..." << endl;
        }
        else if (selection == '3') {
            cout << "Cekeceginiz parayi girin: ";
            cin >> para;

            balance -= para;
            cout << "Para cekildi.Ana menuye yonlendiriliyor...";

        }

        else
            cout << (selection == 'q' || selection == 'Q' ? "Cikis yapiliyor..." : "Yanlis karakter");

    } while (selection !='q' && selection !='Q');
        
    cout << "Cikis yapildi..";
    return 0;
}
