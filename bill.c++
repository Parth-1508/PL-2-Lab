#include <iostream>
using namespace std;

class ElectricityBill {
    float units;
    float totalAmount;
public:
    void setUnits(float u) { units = u; }
    
    void calculateBill() {
        // Assume $5 per unit for this example
        float baseAmount = units * 5.0; 
        float discount = baseAmount * 0.02; // 2% discount
        totalAmount = baseAmount - discount;
        
        cout << "Base Bill: $" << baseAmount << endl;
        cout << "Discount (2%): -$" << discount << endl;
        cout << "Final Bill to Pay: $" << totalAmount << endl;
    }
};

int main() {
    ElectricityBill myBill;
    myBill.setUnits(150);
    myBill.calculateBill();
    return 0;
}