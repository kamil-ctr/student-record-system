#include <iostream>
using namespace std;


int Min(int x, int y) {
    if (x < y)
        return x;
    else
        return y;
}


int Min(int x, int y, int z) {
    if (x < y && x < z)
        return x;
    else if (y < z)
        return y;
    else
        return z;
}


float Min(float x, float y) {
    if (x < y)
        return x;
    else
        return y;
}

int main() {
    

   
    cout << "Min(10, 5): " << Min(10, 5) << endl;

    
    cout << "Min(12, 7, 9): " << Min(12, 7, 9) << endl;

    
    cout << "Min(18.0f, 9.0f): " << Min(18.0f, 9.0f) << endl;

    return 0;
}