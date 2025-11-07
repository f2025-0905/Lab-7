#include <iostream>
using namespace std;

void checkEvenOdd(int n) {
    if (n%2 == 0)
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;
}
    
int main() {
    for(int i=1; i>=1; i++){
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkEvenOdd(num);
        
    }
    return 0;
}