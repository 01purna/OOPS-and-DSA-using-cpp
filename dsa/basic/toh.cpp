// tower of hanoi in cpp 

#include <iostream>
using namespace std;
void hanoi(int n, char SO, char HE, char DE) {
    if (n == 1) {
        cout << "Move disk 1 from " << SO << " to " << DE << endl;
        return;
    }
    hanoi(n - 1, SO, DE, HE);
    cout << "Move disk " << n << " from " << SO << " to " << DE << endl;
    hanoi(n - 1, HE, SO, DE);
}
int main() {
    int n=2;
    hanoi(n, 'S', 'H', 'D');

    return 0;
}