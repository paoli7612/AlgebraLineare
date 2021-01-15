#include <iostream>

// Ok ripartiamo e riscriviamo il più possibile del programma di algebra
// ... lineare utilizzando solo quello che abbiamo studiato a programmazione

using namespace std;

struct matrice_t {
	int** v;
	int r, c; // righe colonne
};

struct matrici_t {
	matrice_t* mm;
	int el, N;
};
void stampa_matrice(const matrice_t m){
	for (int y=0; y<m.r; y++){
		for (int x=0; x<m.c; x++)
			cout << m.v[y][x] << " ";
		cout << endl;
	} cout << endl;
}

void stampa(const struct matrici_t matrici){
	for (int i=0; i<matrici.el; i++)
		stampa_matrice(matrici.mm[i]);
}

void inizializza_matrice(matrice_t &m, int r, int c){
	m.r = r;
	m.c = c;
	m.v = new int*[c];
	for (int y=0; y<m.r; y++){
		m.v[y] = new int[r];
		for (int x=0; x<m.c; x++)
			m.v[y][x] = 0;
	}
}

int main(){
	matrici_t matrici;
	
	const char menu[] =
		"\t1. Inizializza lista matrici\n"
		"\t2. Stampa matrici\n"
		"\t3. Aggiungi matrice\n";
	
	while (true){
		int scelta;
		cout << menu << endl;
		cout << "Scelta: "; 
		cin >> scelta;
		
		switch (scelta){
			int n;
			case 1:
				cout << "numero massimo matrici: ";
				do {
					cin >> n;
					matrici.mm = new matrice_t[n];
				} while (n < 0 || n > 10000);
				matrici.N = n;
				matrici.el = 0;
				break;
			case 2:
				stampa(matrici);
				break;
			case 3: {
				int r, c;
				cout << "inserisci n_righe e n_colonne: ";
				cin >> r >> c;
				inizializza_matrice(matrici.mm[matrici.el++], r, c);
				break;
			}
		}
	}	
	
}
