#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    char selection{};
    vector <int> vec{};

    do {
        cout << "-------------------------------------------" << endl;
        cout << "Programa hosgeldiniz.Lutfen yapmak istediginiz islemi seciniz." << endl;
        cout << "P.Print " << endl;
        cout << "A.Add a number" << endl;
        cout << "M.Display mean to numbers" << endl;
        cout << "S.Display the smallest number" << endl;
        cout << "L.Display the largest numbers" << endl;
        cout << "Q.quit" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "Secimi yap: ";
        cin >> selection;
        int sayi = 0;
        if (selection == 'P' || selection == 'p') {
            if (vec.size() == 0)
                cout << "List is empty" << endl;

            else {
                cout << "[ ";
                for (unsigned int i = 0; i < vec.size(); ++i) {
                    cout << " " << vec.at(i);
                }
                cout << " ]" << endl;
            }
        }
        else if (selection == 'A' || selection == 'a') {
            cout << " Add to numbers what do you want: ";
            cin >> sayi;
            vec.push_back(sayi);
            cout << sayi << " Added." << endl;
        }

        else if (selection == 'm' || selection == 'M') {
            if (vec.size() == 0)
                cout << "List is empty" << endl;
            else {
                int toplam = 0;
                for (auto i : vec)
                    toplam += i;

                double ort = static_cast<double>(toplam) / vec.size();

                cout << "Average numbers is " << ort << endl;
            }
        }

        else if (selection == 's' || selection == 'S') {
            if (vec.size() == 0)
                cout << "List is empty" << endl;
            else {
                
                int en_kucuk = vec.at(0);
                for (unsigned int i = 0; i < vec.size();++i) {
                    if (vec.at(i) < en_kucuk)
                        en_kucuk = vec.at(i);
                }

                cout << "Smallest number is " << en_kucuk << endl;
            }

        }
        else if (selection == 'l' || selection == 'L') {
            if (vec.size() == 0)
                cout << "List is empty" << endl;
            else {
                int en_buyuk = vec.at(0);
                for (unsigned int i = 0; i < vec.size(); ++i) {
                    if (vec.at(i) > en_buyuk)
                        en_buyuk = vec.at(i);
                }

                cout << "largest number is " << en_buyuk << endl;


            }

        }

        else
            cout << (selection == 'q' || selection == 'Q' ? "Cikis yapiliyor...\n" : "Yanlis karakter\n");

    } while (selection !='q' && selection !='Q');
        
    cout << "Cikis yapildi..";
    return 0;
}
