#include <iostream>
using namespace std;

//By Molestum314

int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "Masukkan Maksimal Bilangan Positif Fibonacci : ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    cout << " \nDeret Fibonacci : " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    
    cout << endl;
    
    return 0;
}
