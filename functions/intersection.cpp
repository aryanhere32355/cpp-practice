#include <iostream>
using namespace std;

void F(int ar[], int br[]) {
    int a;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <2; j++) {
            if (ar[i] == br[j]) {
              cout<<ar[i];
                break; // Avoid printing duplicates
            }
        }
        
    }
}

int main() {
    int ar[] = {2, 1, 3};
    int br[] = {1, 2};
    

    F(ar, br);

    return 0;
}
