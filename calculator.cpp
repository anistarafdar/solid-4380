#include <string>
#include <iostream>

class DiscountCalculator {
	protected:
		double discount = 1.00;
public:

    double calculate(double amount) const {
        return amount * discount;
    }

    //{}
};



class LoyalCalculator : public DiscountCalculator {
public:
    LoyalCalculator() {
        discount = 0.95;
    }
};




class VIPCalculator : public DiscountCalculator {
public:
    VIPCalculator() {
        discount = 0.90;
    }
};




// Included for demonstration
int main() {
    DiscountCalculator calc;
	
	VIPCalculator vipCalc;
    LoyalCalculator loyalCalc;

    double price = 1000;

    std::cout << "VIP Customer Price: " << vipCalc.calculate(price) << "\n";
    std::cout << "Loyal Customer Price: " << loyalCalc.calculate(price) << "\n";
    std::cout << "Other Customer Price: " << calc.calculate(price) << "\n";
}
