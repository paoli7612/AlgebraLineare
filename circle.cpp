#include <iostream>

// Ammazziamo il tempo

using namespace std;

int main(int argc, char** argv){

    int W = 100;
    int H = 40;
    int r = 20;

    for (int y=(-H/2); y<H/2; y++){
        for (int x=(-W/2); x<W/2; x++){
            if (x*x + 2*y*y < (r*r))
                cout << " ";
            else
                cout << "O";
        }
        cout << endl;
    }
    return 0;
}