#include <iostream>
#include <string>

using namespace std;

class patient
{
private:
int patientid;
string patient_name;
int billing_amount;
int appointment_date;

public:
patient()
{
patient_name="Varun";
billing_amount=12345;
appointment_date=31;
patientid=69;
}
void display_data()
{
cout<<"patient name:"<<patient_name<<endl;
cout<<"patient id:"<<patientid<<endl;
cout<<"billing amount:"<<billing_amount<<endl;
cout<<"appointment date:"<<appointment_date<<endl;
}
};

int main()
{
patient p;
p.display_data();
return 0;
}