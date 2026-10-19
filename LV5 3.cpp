//Matej Jambrošić
//ulazni parametri: dvodimenzionalni niz visina terena, broj redaka i granica
//Izlazni parametar: redak koji predstavlja najbolji koridor ili -1

#include <iostream>
using namespace std;

int najboljiKoridor(int teren[][4], int brojRedaka, int D) {
    int najbolji = -1;
    int najmanjaRazlika = D + 1;

    for (int i = 0; i < brojRedaka; i++) {
        int min = teren[i][0];
        int max = teren[i][0];

        for (int j = 1; j < 4; j++) {
            if (teren[i][j] < min) {
                min = teren[i][j];
            }

            if (teren[i][j] > max) {
                max = teren[i][j];
            }
        }

        int razlika = max - min;

        if (razlika <= D && razlika < najmanjaRazlika) {
            najmanjaRazlika = razlika;
            najbolji = i;
        }
    }

    return najbolji;
}

int main() {
    int teren[100][4];
    int brojRedaka, D;

    cout << "Unesi broj redaka: ";
    cin >> brojRedaka;

    cout << "Unesi vrijednost D: ";
    cin >> D;

    cout << "Unesi visine terena (4 po retku):" << endl;

    for (int i = 0; i < brojRedaka; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> teren[i][j];
        }
    }

    int rezultat = najboljiKoridor(teren, brojRedaka, D);

    if (rezultat == -1) {
        cout << "Ne postoji siguran redak." << endl;
    }
    else {
        cout << "Najbolji koridor je redak: " << rezultat << endl;
    }

    return 0;
}