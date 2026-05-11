#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* c = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (c[i] % 2 == 0) {
            c[i] = c[i] / 2;
        }
        else {
            c[i] = c[i] + 1;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }

    cout << endl;

    delete[] c;

    return 0;
}
