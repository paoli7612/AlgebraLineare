#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

char l[] = {'x', 'y', 'z', 'w'}; 

int random(int max){
    return rand()%max;
}

int main(int argc, char** argv){

    srand(time(NULL));
    int p = 3; // 1-4 numero delle variabili
    int *vars = new int[p];
    for (int i=0; i<p; i++){
        vars[i] = random(10)-5;
    }

    int *coe = new int[p];
    for (int n=0; n<p; n++){
        int p = 0;
        for (int i=0; i<p; i++){
            coe[i] = random(10);
            p += coe[i]*vars[i];
            cout << " + " << coe[i] << l[i] << " ";
        }
        cout << endl;
    }

    return 0;
}