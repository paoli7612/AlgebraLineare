#include <iostream>
#include <time.h>
#include <cstdlib>

// Ok ripartiamo e riscriviamo il più possibile del programma di algebra
// ... lineare utilizzando solo quello che abbiamo studiato a programmazione

using namespace std;

int valore_casuale()
{
	return rand()%20 - 10;
}

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
	for (int y=0; y<matrice.righe; y++){
		for (int x=0; x<matrice.colonne; x++)
			cout << matrice.valori[y][x] << " ";
		cout << endl;
	}
}

void stampa_insieme(const struct insieme_t &insieme)
{
	for (int i=0; i<insieme.elementi; i++)
	{
		cout << " ( " << i+1 << " ) " << endl;
		stampa_matrice(insieme.matrici[i]);
		cout << "_____________________________" << endl;;
	}
}

// Chiede le dimensioni di una nuova matrice e la aggiunge all'insieme
void crea_matrice(struct insieme_t &insieme)
{
	matrice_t *matrice = &insieme.matrici[insieme.elementi++];
	
	cout << "numero righe: ";
	cin >> matrice->righe;
	cout << "numero colonne: ";
	cin >> matrice->colonne;
	
	matrice->valori = new int*[matrice->righe];
	for (int y=0; y<matrice->righe; y++){
		matrice->valori[y] = new int[matrice->colonne];
		for (int x=0; x<matrice->colonne; x++)
			matrice->valori[y][x] = 0;
	}
}

void rimuovi_ultima_matrice(struct insieme_t &insieme)
{
	if (insieme.elementi == 0)
		return;

	insieme.elementi--;
}

void mescola_matrice(struct insieme_t &insieme, int i){
	int p = i-1;
	matrice_t* matrice = &insieme.matrici[p];
	
	for (int y=0; y<matrice->righe; y++)
		for (int x=0; x<matrice->colonne; x++)
			matrice->valori[y][x] = valore_casuale();
}

int main(){
	
	srand(time(NULL));
	
	insieme_t insieme;
	init(insieme, 10);
	
	const char menu[] = 
		"1. Crea matrice\n"
		"2. Stampa insieme\n"
		"3. Rimuovi ultima matrice\n"
		"4. Imposta valori casuali\n";
		
		
	bool run = true;
	while (run)
	{
		cout << menu << endl;
	
		int scelta;
		cin >> scelta;
	
		switch (scelta)
		{
			int i;
			
			case 1: // Crea matrice
				crea_matrice(insieme);
				break;
			
			case 2: // Stampa insieme
				stampa_insieme(insieme);
				break;
			
			case 3: // Rimuovo ultima matrice
				rimuovi_ultima_matrice(insieme);
				break;
			
			case 4: // Imposta valori casuali
				cout << "Inserisci l'indice della matrice da modificare: ";
				cin >> i;
				mescola_matrice(insieme, i);
		}
	}
	
	
}
