#include <iostream>
using namespace std;

void checkEvenOdd(int n) {
    if (n%2 == 0)
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;
    }

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    cout << "Total digits= " << count << "\n";
    return count;
}
int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << "sum of digits= " << sum << "\n";
    return sum;
}
int isPrime(int n){
        int i = 1; 
        int qoutient = 0;
        
        while (i <= n) {
           if (n%i == 0){
           qoutient++;
           }
        i++;
        }
        if (qoutient < 2){
             cout << n << " is not a prime not composite.\n";
        } else if(qoutient == 2){
            cout << n<< " is a prime number.\n";
        } else{
             cout << n<< " is a composite number.\n";
            }
            return qoutient;
    }
    
    


int main() {
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    
    bool isTrue = true;
    
    while (isTrue == true){
        int opt;
    cout << "Select an option from below" << endl;
    cout << "1. Check Even/Odd" << endl;
    cout << "2. Count digit" << endl;
    cout << "3. Sum of digit" << endl;
    cout << "4. Check prime/composite" << endl;
    cout << "5. Exit" << endl;
    cout << "Option: ";
    cin >> opt;
    
        
       switch (opt){
       case 1: checkEvenOdd(num);
       break;
       case 2: countDigits(num);
       break;
       case 3: sumDigits(num);
       break;
       case 4: isPrime(num);
       break;
       case 5: isTrue = false;
       break;
       default: cout << "Invalid option" << endl;
        }
    }
    
    
    

    return 0;
}