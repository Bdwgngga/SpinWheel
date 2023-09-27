#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); // Inisialisasi generator acak dengan waktu saat ini

    char ulangi;

    do {
        vector<string> items;

        int numItems;
        cout << "\n";
        cout << "==================================== Whell Spin ====================================" << endl ;
        cout << "Enter how much items you want to enter : ";
        cin >> numItems;

        for (int i = 0; i < numItems; ++i) {
            string item;
            cout << "Item Name " << i + 1 << " : ";
            cin >> item;
            items.push_back(item);
        }

        // Memutar roda putar
        int randomIndex = rand() % items.size();
        string result = items[randomIndex];
        cout << "====================================== Result ======================================" << endl ;
        cout << "The Winner Is " << result << endl;
        cout << "====================================================================================" << endl ;

        do {
            cout << "Again (Y/N)? ";
            cin >> ulangi;
            ulangi = toupper(ulangi); // Mengubah input menjadi huruf besar

            if (ulangi == 'N') {
                cout << "\n" << endl ;
                cout << "========================= Thank you for using this program =========================" << endl ;
                cout << "============================= Made By Bagas Dewangga ===============================" << endl ;
                cout << "\n" << endl ;
                return 0; // Keluar dari program jika pengguna memilih 'N'
            } else if (ulangi != 'Y') {
                cout << "Invalid selection. Please enter Y or N." << endl;
            }
        } while (ulangi != 'Y');

    } while (true);

    return 0;
}