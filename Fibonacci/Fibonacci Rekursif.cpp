#include <iostream>
using namespace std;
    
//By Molestum314
    
int fibonacci(int m) {
    if (m == 0 || m ==1){
        return m;
      } else {
        return (fibonacci(m-1) + fibonacci(m-2));
      }
    }
    //end of fungsi rekursif
    
int main() {
      
    int n, m= 0;
      cout << "Masukkan Berapa Deret Fibonacci Yang Diinginkan : ";
    cin >> n;
    cout << "\nDeret Fibonacci : ";
    for (int i = 1; i <= n; i++){
        cout << fibonacci(m) <<" ";
        m++;
    }
    
    cout << endl;
    
	return 0;
}
