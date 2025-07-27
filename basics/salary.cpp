//Mohammad kamil 23BCE10029
#include<iostream>
using namespace std;
int main()
{
    float basic,allowances,deductions;
    cout<<"enter basic sallary,percentage allowance,percentage of deduction";
    cin>>basic>>allowances>>deductions;
    float netsalary;
    netsalary=basic+(basic*allowances/100)-(basic*deductions/100);
    cout<<"net sallary:"<<netsalary;

    return 0;
}