#include <iostream>

// Ok ripartiamo e riscriviamo il più possibile del programma di algebra
// ... lineare utilizzando solo quello che abbiamo studiato a programmazione

using namespace std;


// Descirttore matrice
struct matrice_t {
	int righe, colonne;
	int** valori;
};

// Descrittore insieme di matrici
struct insieme_t {
	int N;					// Max elementi
	matrice_t* matrici;
	int elementi;
};

// Inizializza insieme vuoto a max n matrici
void init(struct insieme_t &insieme, int n)
{
	insieme.matrici = new matrice_t[n];
	insieme.N = n;
	insieme.elementi = 0;
}

stampa_matrice(const struct matrice_t &matrice)
{
	for (int y=0; y<matrice.righe; y++)
		for (int x=0; x<matrice.colonne; y++)
			matrice.valori[y][x] = 0;
}

void stampa_insieme(const struct insieme_t &insieme)
{
	for (int i=0; i<insieme.elementi; i++)
		stampa_matrice(insieme.matrici[i]);
}

// Chiede le dimensioni di una nuova matrice e la aggiunge all'insieme
void crea_matrice(struct insieme_t &insieme){
	matrice_t *matrice = insieme.matrici[insieme.elementi++];
	
	cout << "numero righe: ";
	cin >> matrice->righe;
	cout << "numero colonne: ";
	cin >> matrice->colonne;
	
	matrice->valori = new int*[];
	for (int y=0; y<matrice->righe; y++)
		for (int x=0; x<matrice->colonne; y++)
			matrice->valori[y][x] = 0;
}

int main(){
	
	insieme_t insieme;
	init(insieme, 4);
	
	const char menu[] = 
		"1. Crea matrice\n"
		"2. Stampa insieme\n"
		"3. Rimuovi prima matrice\n";
		
		
	bool run;
	while (run){
		
	}
	
	
}
