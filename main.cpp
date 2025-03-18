#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum = 0;
    
    std::string card;
    std::cout << "Enter your card number: ";
    std::cin >> card;

   for (int i = card.size() - 2; i >= 0; i -= 2) {
        if (card[i] != ' ') {
            int digit = card[i] - '0'; 
            int doubled =  digit * 2;
            if (doubled > 9)
            {
                doubled = doubled - 9;
            }
            
            std::cout << card[i] << " et son double est " << doubled << '\n';
           // sum = sum + (digit * 2);
         sum = sum + doubled;
        }
    }

    std::cout << "*****************" << '\n';
    
    for (int x = card.size()-1; x >= 0; x-=2) {
        if (card[x] != ' ') {
            int dig = card[x] - '0';
            sum = sum + dig;
            std::cout << card[x] << " et sa valeur  est : " << dig << '\n';
        }
       //std::cout << card[x] << '\n';
    }

    std::cout << sum << '\n';
    std::cout << sum % 10 << '\n';
   bool isValid = (sum % 10 == 0);
   std::cout << "Sum: " << sum << "\nValid: " << (isValid ? "YES" : "NO") << std::endl;
    return 0;
}
