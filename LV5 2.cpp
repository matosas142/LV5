//Matej Jambrošić - signal u tunelu
//ulazni parametri: signal, broj signala, granica
//izlazni parametar: indeks prvog skoka, -1 ako nema skoka
int prviSkok(int signal[], int n, int D) {
    for (int i = 1; i < n; i++) {
        if (signal[i] - signal[i - 1] > D ||
            signal[i - 1] - signal[i] > D) {
            return i;
        }
    }
    return -1;
}