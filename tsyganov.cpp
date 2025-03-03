#include <iostream>
#include <string>
using namespace std;

int main () {
    setlocale(LC_ALL, "RU");
    string a;
    int n;
    cout << "Имя: ";
    cin >> a;
    cout << "Сколько 2^4? ";
    cin >> n;
    switch(n)
    {
        case 16: 
            cout << "Ура, молодец!!!"; 
            break;
        default :
            cerr << "Дурак!!!"; 
            break;
    }
    return 0;
}