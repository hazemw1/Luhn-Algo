#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main() {
	int sum = 0;
	std::string card;
	std::cout << "Enter your card number: ";
	std::cin >> card;

	
	card.erase(remove(card.begin(), card.end(), ' '), card.end());
	for (char c : card) {
		if (!isdigit(c)) {
			std::cout << "Invalid character in card number!" << std::endl;
			return 1;
		}
	}

	// Luhn Algorithm
	for (int i = card.size() - 2; i >= 0; i -= 2) {
		int digit = card[i] - '0';
		int doubled = digit * 2;
		if (doubled > 9) {
			doubled -= 9;
		}
		sum += doubled;
	}

	for (int x = card.size() - 1; x >= 0; x -= 2) {
		int dig = card[x] - '0';
		sum += dig;
	}

	//Check validity
	bool isValid = (sum % 10 == 0);
	std::cout << "Sum: " << sum << "\nValid: " << (isValid ? "YES" : "NO") << std::endl;
	return 0;
}
