//Matej Jambrošić - punionica za e-bicikle
//ulazni parametri su vektor i broj bicikala
//izlazni parametar je indeks prve punionice koja prima taj broj bicikla
#include <vector>
using namespace std;

int prvaPunionica(const vector<int>& slobodno, int K) {
    for (int i = 0; i < slobodno.size(); i++) {
        if (slobodno[i] >= K) {
            return i;
        }
    }
    return -1;
}