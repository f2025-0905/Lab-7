#include <iostream>
using namespace std;

void checkEvenOdd(int n) {
    if (n%2 == 0)
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;
    }

void line(){
    cout << "________________________________________\n";
    }
    
int main() {
    bool loop = true;
    
    while (loop == true){
       int num;
       cout << "Enter a number or zero to exit: ";
       cin >> num;
  
       if (num == 0){
            loop = false;
          }else {
            checkEvenOdd(num);
            line();
        }
        
    }    
    return 0;
}