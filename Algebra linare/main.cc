#include <iostream>

// Ok ripartiamo e riscriviamo il più possibile del programma di algebra
// ... lineare utilizzando solo quello che abbiamo studiato a programmazione

using namespace std;

struct matrice_t {
	int r, c;
	int** v;
};

struct insieme_t {
	int N;
	matrice_t* matrici;
	int el;
};

void init(struct insieme_t insieme, int n){
	insieme.matrici = new matrice_t[n];
	insieme.N = n;
	insieme.el = 0;
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
