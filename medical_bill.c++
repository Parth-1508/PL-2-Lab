#include <iostream>
using namespace std;

class MedicalBill {
    float medicineCost;
    float doctorFee;
    float totalBill;
public:
   
    MedicalBill(float med, float doc) {
        medicineCost = med;
        doctorFee = doc;
        totalBill = medicineCost + doctorFee;
    }
    
    void displayBill() {
        cout << "Medicine Cost: Rs." << medicineCost << endl;
        cout << "Doctor Fee: Rs." << doctorFee << endl;
        cout << "Total Medical Bill: Rs." << totalBill << endl;
    }
};

int main() {
    MedicalBill patientBill(45.50, 100.00);
    patientBill.displayBill();
    return 0;
}