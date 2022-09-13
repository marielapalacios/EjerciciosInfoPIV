#include <iostream>
 
using namespace std;
 
int main()
{
    int sz;
 
    cout << "\nTamanio del arreglo: ";
    cin >> sz;
 
    int a[sz];
    int b[sz];
    int c[sz] = { 0 };
 
    cout << "\nDatos del arreglo 1:\n";
    for( int i = 0; i < sz; i++ ) {
        cout << "(" << i + 1 << "/" << sz << "): ";
        cin >> a[i];
    }
 
    cout << "\nDatos del arreglo 2:\n";
    for( int i = 0; i < sz; i++ ) {
        cout << "(" << i + 1 << "/" << sz << "): ";
        cin >> b[i];
    }
 
    for( int i = 0; i < sz; i++ ) {
        c[i] = a[i] + b[i];
    }
 
    cout << "\nLa suma es: ";
    for( int i = 0; i < sz; i++ )
        cout << c[i] << " ";
 
 
 
    cout << endl;
 
    return 0;
}
