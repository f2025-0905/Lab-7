#include <iostream>
using namespace std;

int febonacciNumber(int a){
    int num = 0, numF = 1;
    cout << num << ", ";
    cout << numF << ", ";
    
    for (int i=1; i <= a-2; i++){
        int nextNum = num + numF;
        num = numF;
        numF = nextNum;
        cout << nextNum << ", ";
        
    }
    return numF;
}

int main() {
   int num;
   cout << "Febonacci Number Up to level: ";
   cin >> num;
   
   febonacciNumber(num);
   

    return 0;
}