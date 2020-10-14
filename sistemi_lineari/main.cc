#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int random(int max){
    return rand()%max;
}

int main(int argc, char** argv){

    srand(time(NULL));

    int x = random(10);
    int y = random(10);

    int a, b, c;
    for (int n=0; n<3; n++){
        a = random(10);
        b = random(10);
        c = (a*x) + (b*y);

        cout << a << "x + " << b << "y = " << c << endl;
    }

    cout << "x = " << x << endl << "y = " << y << endl;


    return 0;
}