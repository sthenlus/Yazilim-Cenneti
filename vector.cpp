
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    //vektörleri boş  tanımlayıp 10 ve 20 ekledim
    vector <int> vector1;
    vector <int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    //vektörleri çıkarttım
    cout << "Vektor1 deki elemanlar : " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    cout << "\nThis vector1 size is : " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nVektor2 deki elemanlar : " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;

    cout << "\nThis vector1 size is : " << vector2.size() << endl;

    vector <vector<int>> vector_2D;

    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);

    cout << "\Vektor2D deki elemanlar : " << endl;
    cout << vector_2D.at(0).at(0) << " " << vector_2D.at(0).at(1) << endl;
    cout << vector_2D.at(1).at(0) << " " << vector_2D.at(1).at(1) << endl;


    vector1.at(0) = 1000;

    cout << "\nGuncellenmis Vektor2D deki elemanlar : " << endl;
    cout << vector_2D.at(0).at(0) << " " << vector_2D.at(0).at(1) << endl;
    cout << vector_2D.at(1).at(0) << " " << vector_2D.at(1).at(1) << endl;

    cout << "\nGuncellenmis Vektor1 deki elemanlar : " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "This vector1 size is : " << vector2.size() << endl;


    return 0;


}
